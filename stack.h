#include "linkedlist.h"
#ifndef STACK_H
#define STACK_H

typedef address Stack;

void createStack(Stack *s);
boolean is_StackEmpty(Stack s);
void push(Stack *s, infotype X);
int pop(Stack *s, infotype *X);
void printStack(Stack s);

#endif
