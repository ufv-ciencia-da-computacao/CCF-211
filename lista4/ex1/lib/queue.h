#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define STR_MAX 512

typedef struct node_t* Node;

typedef struct {
  char description[STR_MAX];
} Mission;

struct node_t {
  Mission mission;
  Node next;
};

typedef struct {
  Node head;
  Node tail;
} Queue;


void initMission(Mission* m, char *description);
void initNode(Node *node, Mission m);
void initQueue(Queue *q);
bool queueIsEmpty(Queue *q);
void enqueue(Queue *q, Node node);
void dequeue(Queue *q, Mission *missionDequeued);
void setQueueNull(Queue *q);

#endif