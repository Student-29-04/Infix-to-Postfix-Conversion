#include "functions.h"

char pop(void)
{
    char ch;
    ch = stack[top];
    top--;
    return ch;
}
