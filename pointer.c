#include<stdio.h>

int main(){

	int a;
	int *ptr;

	ptr = &a ;

	printf("\n Enter the Value of a :");
	scanf("%d",&a);

	printf("\n  Value of a is %d",a);

	printf("\n Value of a is %d using pointer",*ptr);

	printf("\n Address of a is %p",&a);

	printf("\n Address of a using pointer is %p",ptr);
	
	printf("\n Address of Pointer is %p",&ptr);

	return 0;

}


