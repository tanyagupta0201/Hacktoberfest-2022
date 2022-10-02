#include <stdio.h>
#include <stdlib.h>
#define max 5
int stack_arr[max];
int top = -1;

int isFull()
{
    if (top == max - 1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

void push(int d)
{
    if (isFull())
    {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack_arr[top] = d;
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    int val = stack_arr[top];
    top--;
    return val;
}

int peek()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack_arr[top];
}

void print()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        return;
    }
    for (int i = 0; i <= top; i++)
    {
        printf("[%d", stack_arr[i]);
    }
    printf("\n");
}

int main()
{
    int choice, data;
    printf("\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Print the top element\n");
    printf("4. Print all the elements of the stack\n");
    printf("5. Quit\n");
    while (1)
    {
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("Deleted element is %d\n", data);
            break;
        case 3:
            printf("Top element in stack is : %d\n", peek());
            break;
        case 4:
            print();
            break;
        case 5:
            exit(1);
        default:
            print("Wrong Choice.\n");
        }
    }
    return 0;
}