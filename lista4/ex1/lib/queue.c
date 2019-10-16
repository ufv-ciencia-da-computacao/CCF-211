#include "queue.h"

void initMission(Mission *m, char *description) {
  strcpy(m->description, description);
}

void initNode(Node *node, Mission m) {
  (*node) = (Node) malloc (sizeof(struct node_t));
  (*node)->next = NULL;
  (*node)->mission = m;
}

void initQueue(Queue *q) {
  q = (Queue*) malloc(sizeof(Queue));
  q->head = (Node) malloc (sizeof(struct node_t));
  q->tail = q->head;
  q->head->next = NULL;
}

bool queueIsEmpty(Queue *q) {
  return q->head == q->tail;
}

void enqueue(Queue *q, Node node) {
  if (node == NULL) return;
  
  Node iterator = q->tail;
  iterator->next = node;
  q->tail = iterator->next;
}

void dequeue(Queue *q, Mission *missionDequeued) {
  Node iterator = q->head;
  Node aux;

  if (queueIsEmpty(q)) {
    return;
  }

  aux = iterator->next;
  q->head->next = aux->next;
  *missionDequeued = aux->mission;

  free(aux);
}

void freeQueue(Queue *q) {
  Node iterator = q->head;
  Node aux;
  
  while (!queueIsEmpty(q)) {
    aux = iterator->next;
    q->head->next = aux->next;

    free(aux);
  }  

  q->head = NULL;
  q->tail = q->head;
}