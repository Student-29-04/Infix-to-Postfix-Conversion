#include <stdio.h>
#include "functions.h"
#include <string.h>

char stack[100];
int top = -1;

void push(char ch);
char pop();
int precedence(char ch);

int main()
{
    char str[100], postfix[100];
    int i = 0, j = 0;
    char ch;

    printf("enter the infix expression\n");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9'))
        {
            postfix[j++] = ch;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (top != -1 && stack[top] != '(')
            {
                postfix[j++] = pop();
            }

            if (top != -1)
                pop();
        }
        else
        {
            while (top != -1 &&
                   stack[top] != '(' &&
                   (precedence(stack[top]) > precedence(ch) ||
                   (precedence(stack[top]) == precedence(ch) && ch != '^')))
            {
                postfix[j++] = pop();
            }

            push(ch);
        }

        i++;
    }

    while (top != -1)
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix expression is : %s\n", postfix);

    return 0;
}


