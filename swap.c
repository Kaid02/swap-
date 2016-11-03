/*
Student Name : Kabir Shrestha
Program : Write a program to swap numbers without using temporary 
		  variables or third variables.
Lab No. : 11
Date : 2016-11-03
*/
#include<stdio.h>
	int main(){
	int a,b;
	
	printf("Enter the first number :\n");
	scanf("%d",&a);
	
	printf("Enter the second number :\n");
	scanf("%d",&b);
	
	printf("\nAfter swapping\n");
	a=a-b;
	b=a+b;
	a=b-a;
	
	printf("\nThe first number :%d\n",a);
	printf("\nThe second number :%d\n",b);
	
	return 0;
	}
