#include<stdio.h>

void main(){

	int marks[5];
	int i;

        for(i=0;i<5;i++)
  
	{	
	printf("\nEnter the marks for subject %d :",i+1);
	scanf("%d",&marks[i]);
        }

	for(i=0;i<5;i++)
	{
	printf("\nEntered marks for subject %d is %d",i+1,marks[i]);
	}	
}
 

