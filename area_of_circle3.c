#include<stdio.h>

void main(){

	float pie = 3.14;
	int radius;

	printf("\nEnter the Radius of the Circle :");
	scanf("%d",&radius);

	printf("\nThe value of Radius is %d",radius);

	float area = (float)(pie*radius*radius);

		printf("\nThe area of the circle is %f",area);
}
