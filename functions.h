#ifndef FUNCTIONS_H
#define FUNCTIONS_H

extern char stack[100];
extern int top;

void push(char ch);
char pop(void);
int precedence(char ch);

#endif
