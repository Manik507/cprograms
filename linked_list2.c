#include<stdio.h>
#include<stdlib.h>

struct Emp{

	char name[50];
	struct Emp *next;
};

void main(){

	struct Emp *head,*temp,*new;
	int i,a;

	//Create Head Node
	head = (struct Emp*)malloc(sizeof(struct Emp));

	printf("\nEnter the Name for Head Node :");
	scanf("%s",head->name);

        head->next = NULL;

	printf("\nPlease Enter the Number of Nodes in Linked List :");
	scanf("%d",&a);

	for(i=0;i<a;i++)
	{

	temp=head;
	while(temp->next !=NULL)
	{
	temp = temp ->next;	
	}
	new = (struct Emp*)malloc(sizeof(struct Emp));
	new->next = NULL;

	printf("\nEnter the Name :");
	scanf("%s",new->name);

	temp->next = new;
	}

	temp=head;

	printf("\nEntered Values are");
	while(temp != NULL)

	{
		printf("\nEntered Name is %s",temp->name);
		temp = temp->next;
	}
}


		


