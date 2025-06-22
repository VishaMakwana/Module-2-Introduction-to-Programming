#include<stdio.h>
int factorial(int n);
int main()
{
	/* Write a C program that calculates the factorial of a number using a function. 
Include function declaration, definition, and call.*/
int num;
printf("enter the number");
scanf("%d",&num);
	
	if (num<0)
{
	printf("factorial not difine by negative number.\n");
}
else
{

	printf("factorial of %d is %d\n",num,factorial(num));
	
}

  return 0;
}

int factorial(int n)
{
	 int r=1;
	for (int i=1;i<=n;i++){
		r=r*i;
	}
	return r;
}
