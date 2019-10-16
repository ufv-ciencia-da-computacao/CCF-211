#include "stack.h"

void initStack(Stack *stk) {
  stk->head = 0;
}

bool stackIsEmpty(Stack *stk) {
  return stk->head == 0;
}

void push(Stack *stk, Queue *q) {
  if (stk->head != MAX_TAM) {
    stk->vectorQueue[stk->head++] = *q;
  }
}

void pop(Stack *stk, Queue *qPopped) {
  if (!stackIsEmpty) {
    *qPopped = stk->vectorQueue[stk->head--];
  }
}