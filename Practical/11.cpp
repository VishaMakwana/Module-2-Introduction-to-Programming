#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	/*Write a C program that takes two strings from the user and concatenates them 
using strcat(). Display the concatenated string and its length using 
strlen().*/

char fname [100];
char lname [100];

printf("enter your fist name\n");
scanf("%s",&fname);
printf("enter your second name\n");
scanf("%s",&lname);
strcat(fname," ");
strcat(fname,lname);

printf("concatenates stirng %s\n",fname);
printf("Length: %lu\n", strlen(fname));

 
	return 0;
}
