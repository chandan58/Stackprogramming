#include<stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include ”stack.h”
#def ine STACK_SIZE 10
// Structure defining a stack
struct stack
{
char elements[STACK_SIZE ] ;
int top ;
} ;
void reverse_print(stack)
{
    int n = strlen(str);
    Stack* stack = createStack(n);

    // Push all characters of string to stack
    int i;
    for (i = 0; i < n; i++)
        push(stack, str[i]);

    // Pop all characters of string and
    for (i = 0; i < n; i++)
        str[i] = pop(stack);
}
}
void print( stack* stack)
{
    int i;

	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
}

int main ( )
{
struct stack* st=new_stack ( ) ;
push ( ’H ’ , i ) ;
push ( ’ e ’ , i ) ;
push ( ’ l ’ , i ) ;
push ( ’ l ’ , i ) ;
push ( ’ o ’ , i ) ;
print(stack) ;
reverse_print(stack) ;
}
