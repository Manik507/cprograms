#include<stdio.h>

void main(){

	float pie = 3.14;
	int radius;

	printf("\nEnter the Radius of Circle :");
	scanf("%d",&radius);

	printf("\nThe radius of the circle is %d",radius);

	float area = (float)(pie*radius*radius);

	printf("\nThe Area of given circle is %f",area);

}



