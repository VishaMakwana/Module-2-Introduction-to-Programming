#include<stdio.h>
int main()
{
	/*Write a C program to demonstrate pointer usage. Use a pointer to modify the 
value of a variable and print the result.*/
	int a=5;
	int *p;
	p=&a;

	printf("before :%d\n",a);
	
	*p=20;
	
	printf("After value %d\n",a);
	return 0;
}
