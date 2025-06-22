#include<stdio.h>


struct student{
	char name[10];
	int roll;
	float marks;
}s[3];
int main()
{
	/*Write a C program that defines a structure to store a student's details (name, 
roll number, and marks). Use an array of structures to store details of 3 
students and print them. */

for (int i=0;i<3;i++){
	printf("enter the student details %d \n",i+1);
	printf("enter name:");
	scanf("%s",&s[i].name);
	printf("enter roll number:");
	scanf("%d",&s[i].roll);
	printf("enter marks :"); 
	scanf("%f",&s[i].marks);
	printf("|____________________________|\n");
	
}
       
       printf ("student details\n");
       for(int i=0;i<3;i++){
       	printf("student %d \n",i+1);
       	printf("enter name %s:\n",s[i].name);
		printf("enter roll number %d:\n",s[i].roll);
		printf("enter marks %f:\n",s[i].marks);
	   }
	return 0;
}
