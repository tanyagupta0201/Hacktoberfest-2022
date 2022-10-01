/*
    Authors Name : Mayuri Kolhe
    Date Modified: 1 October, 2022
*/


/* Program to find wheather a number is palindrome or not*/

#include <stdio.h>  
int main()    
{    
	int n,r,sum=0,temp;    
	printf("enter the number=");    
	scanf("%d",&n);    
	temp=n;    
			while(n>0)    
			{    
				r=n%10;    
				sum=(sum*10)+r;    
				n=n/10;    
			}    
	if(temp==sum)    
		printf("%d is a Palindrome number ",temp);    
	else    
		printf("%d is not  a Palindrome number",temp);   
	return 0;  
} 