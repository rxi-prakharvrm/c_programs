#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int stack_arr[MAX] = {1,2,3,4,5,6,3,23,43,23}, item;
int top = -1;
int i;
void push(int item);
int pop();

void main()
{
    int p;
    for(i = 0; i < 10; i++)
    {
        top++;
    }
    p = pop();
    push(item);
    printf("%d", p);
    getch();
}

int isFull()
{

    if(top == MAX-1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}

void push(int item)
{
    printf("Enter a number to be pushed in array: ");
    scanf("%d", &item);
    if(isFull())
    {
        printf("Stack overflow\n");
        return;
    }
    top = top+1;
    stack_arr[top] = item;
    printf("%d", stack_arr[top]);
}

int pop()
{
    int item;
    if(isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    item = stack_arr[top];
    top = top - 1;
    return item;
}
