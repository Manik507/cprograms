#include<stdio.h>

int a;
void manik();   //function declare
void main(){

        manik();
        manik();  //function call
}

void manik(){   //function definition

        printf("\nEnter the number :");
        scanf("%d",&a);

        printf("\nValue of a is : %d",a);

}

