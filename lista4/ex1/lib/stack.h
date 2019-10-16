#ifndef __STACK_H__
#define __STACK_H__

#define MAX_TAM 1000

#include "queue.h"

typedef struct {
  Queue vectorQueue[MAX_TAM];
  int head;
} Stack;

void initStack(Stack *stk);
bool stackIsEmpty(Stack *stk);
void push(Stack *stk, Queue *q);
void pop(Stack *stk, Queue *qPopped);

#endif