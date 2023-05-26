#include<stdio.h>

void main(){

	float radius;
	float pie = 3.14;
	
	printf("\nEnter the Radius of Sphere :");
	scanf("%f",&radius);

	printf("\nThe Radius of Sphere is %f",radius);
        
	float area = (float)(4*pie*radius*radius);

	printf("\nThe Area of the Sphere is %f",area);
}


