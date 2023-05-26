#include<stdio.h>

void main(){

	int i;
	int *ptr;

	ptr = &i;

	printf("\nEnter the Value of i :");
        scanf("%d",&i);

	printf("\nValue of i is %d",i);

	printf("\nValue of i using Pointer is %d",*ptr);

	printf("\nAddress of i is %p",&i);

	printf("\nAddress of i using pointer is %p",ptr);

	printf("\nAddress of pointer is %p",ptr);
}
		
