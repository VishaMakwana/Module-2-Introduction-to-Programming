#include<stdio.h>

int main()
{
	/* write a c program that stares 5 interger in a one -dimentioal array ana prints
	then Extent this  to handles a two-dimentional array(3*3 matrix) and calculate the sum of all elements.*/
	int arr[5]={10,20,30,40,50};
	printf("one dimentional array element\n");
	for (int i=0;i<5;i++){
		printf("array %d\n",arr[i]);
	}
	int matrix[3][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
    };
    
	int sum = 0;
	printf("two dimentional array (3*3) matrix\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d",matrix[i][j]);
			sum = sum + matrix[i][j];
		}
		printf("\n");
	}
	printf("\n sum of all element is 3*3 matrix =%d \n",sum);
	return 0;
}
