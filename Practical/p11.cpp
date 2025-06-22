#include<stdio.h>
int main(){
	/*Write a C program to create a file, write a string into it, close the file, then 
open the file again to read and display its contents.*/


FILE *ptr;
char str[]=" My name is vishal Makwana";
char ch[50];

//Create and opne a file in write mode
ptr=fopen("text.txt","w");
	
	if(ptr == NULL){
		printf("no data\n");
		return 1;
	}
	//write a string to file
	fprintf(ptr,"%s",str);
	
	//close the file
	fclose(ptr);
	
	//opne the file read mode
	
	ptr=fopen("text.txt","r");
	if(ptr == NULL){
		printf("Error opening file \n");
		return 1;
	}
	else{
		fscanf(ptr,"%[^\n]",ch);
		printf("character in file %s \n",ch);	
		fclose(ptr);
	}
	
	return 0;


}
