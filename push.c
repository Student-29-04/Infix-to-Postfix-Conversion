#include "functions.h"

char stack[100];
int top = -1;

void push(char ch)
{
    top++;
    stack[top] = ch;
}
