#include<stdio.h>

double factorial(double);

int main(){

	int t,c;

	printf("Enter the Number whose Factoral you want to Calculate:");
	scanf("%d",&t);

	c =  factorial(t);

	printf("Factorial = %.0d",c);

	return 0;
}

double factorial(double t)
{
	if (t = 1)
	{
		return 1;
	}

	else{
	return	t*factorial(t-1);	
	}
}
