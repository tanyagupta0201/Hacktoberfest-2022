/*
Author Name: Tasmiya Khan
Date Modified: 2 October 2022
*/
//Implementation of Stack using array

#include <stdio.h>
#define max 10
int top=-1, st[max];

void push(int st[]){                     //operation to push element in the stack
int x;
if(top>=max-1){
printf("Stack Overflow\n");
return;
}
printf("Enter the element to push: \n");
scanf("%d", &x);
top++;
st[top]=x;
}


void pop(int st[]){                    //to remove element from top of the stack
if(top==-1){
printf("Stack is Empty\n");
return;
}
top--;
}


int peek(int st[]){                  //to return element present at top of the stack
if(top==-1){
printf("Stack is Empty\n");
return 0;
}
return st[top];
}


void display(int st[]){             //to display stack
if(top==-1){
printf("The stack is empty\n");
return;
}
printf("The elements in the stack are: \n");
for(int i=top;i>=0;i--){
printf("%d ", st[i]);
}
}

int main()
{
int  a;

while(1){
printf("\n 1.Push \n 2.Pop \n 3.Peek\n 4.display \n 5.Exit\n");
printf("Enter the Option: ");
scanf("%d", &a);
switch(a){
case 1: push(st);
break;
case 2:pop(st);
break;
case 3:printf("The element present at top of the stack is: ");
printf("%d",peek(st));
break;
case 4:display(st);
break;
case 5: return 0;
default: printf("Incorrect choice!! ");
}
}
return 0;
}
