CC = gcc
CFLAGS = -Wall

all: main.c push.c pop.c precedence.c
	gcc main.c push.c pop.c precedence.c -o infix_to_postfix

clean:
	rm -f infix_to_postfix
