#include<stdio.h>

void main(){

	char opt;
	int num1,num2;
	float result;

	printf("\nChoose the operator from the following to perform the calculation +,-,*,/ :");
	scanf("%c",&opt);

	if(opt == '+')
	{
		printf("\nSelected Operator is Addition");
	}

	else if(opt == '-')
	{
		printf("\nSelected Operator is Subtraction");
	}

	else if(opt =='*')
	{
		printf("\nSelected Operator is Multiplication");
	}

 	else if(opt == '/')
	{
		printf("\nSelected Operator is Division");
	}

	printf("\nEnter the First Number :");
	scanf("%d",&num1);

	printf("\nEnter the Second Number :");
	scanf("%d",&num2);
 
        switch (opt)
	{
	case '+':
	result = num1 + num2;
        printf("\nAdittion of %d and %d is %.2f",num1,num2,result);
	break;

        case '-':
        result = num1 - num2;
	printf("\nSubtraction of %d and %d is %.2f",num1,num2,result);
	break;

	case '*':
	result = num1 * num2;
	printf("\nMultiplication of %d and %d is %.2f",num1,num2,result);
	break;

	case'/':
	if (num2 = 0){

		printf("\nCan't Divide by 0.Choose othe Number");
	}
	result = num1 /num2;
	printf("\nDivision of %d and %d is %.2f",num1,num2,result);
	break;

	default:

	printf("\nEnter the only valid Operators :");
	}
}



