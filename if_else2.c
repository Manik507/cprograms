#include<stdio.h>

void main(){

        int num1;
        int num2;
        int num3;

        printf("\nEnter the First Number: ");
        scanf("%d",&num1);

        printf("\nEnter the Second Number :");
        scanf("%d",&num2);

        printf("\nEnter the Third Number :");
        scanf("%d",&num3);

        if (num1>num2){

                printf("\nFirst Number is Greater than Second Number");
        }

        else
        {
                printf("\nFirst Number is not Greater than Second Number");
        }

        if (num2>num3){

                printf("\nSecond Number is Greater than Third Number");

        }

        else
        {
                printf("\nSecond Number is not Greater than Third Number");
        }

        if(num1>num3){

                printf("\nFirst Number is Greater than Third Number");
        }

        else
        {
                printf("\nFirst Number is not Greater than Third Number");
        }
}

