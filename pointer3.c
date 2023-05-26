#include<stdio.h>

int main(){

	int i;
	int *ptr;

	ptr = &i;

	printf("\nEnter the value of i :");
	scanf("%d",&i);

        printf("\nValue of i is %d",i);

	printf("\nAddress of i using pointer is %d",*ptr);

	printf("\nAddress of i is %p",&i);

	printf("\nAddress of i using pointer is %p",ptr);

	printf("\nAddress of Pointer is %p",ptr);

	return 0;
}

