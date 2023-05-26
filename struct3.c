#include<stdio.h>

struct student

{
	char name[50];
	char div[10];
	int roll_num;
	int age;
};

void main(){

	int i;
	char c;
	struct student S1,S2;

	printf("\nEnter the Name of the First Student :");
	scanf("%s",S1.name);
	
	printf("\nEnter the Division of the First Student :");
	scanf("%s",S1.div);

	printf("\nEnter the Roll Number of the First Student :");
	scanf("%d",&S1.roll_num);

	printf("\nEnter the Age of the First Student :");
	scanf("%d",&S1.age);

	printf("\nEnter the Name of the Second Student :");
        scanf("%s",S2.name);

        printf("\nEnter the Division of the Second Student :");
        scanf("%s",S2.div);

        printf("\nEnter the Roll Number of the Second Student :");
        scanf("%d",&S2.roll_num);

        printf("\nEnter the Age of the Second Student :");
        scanf("%d",&S2.age);

	printf("\nThe Name of the First Student is %s",S1.name);
        printf("\nThe Division of the First Student is %s",S1.div);
	printf("\nThe Roll Number of the First Student is %d",S1.roll_num);
	printf("\nThe Age of First Student is %d",S1.age);

	printf("\nThe Name of the Second Student is %s",S2.name);
        printf("\nThe Division of the Second Student is %s",S2.div);
        printf("\nThe Roll Number of the Second Student is %d",S2.roll_num);
        printf("\nThe Age of Second Student is %d",S2.age);
}
