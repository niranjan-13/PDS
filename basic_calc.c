#include<stdio.h>
int main(){

	int num1,num2,oper ;

	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);


	printf("Select Operation\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	scanf("%d",&oper);

	if (oper==1)
	{
		printf("%d",num1+num2);
	}
	else if (oper==2)
	{
		printf("%d",num1-num2);

	}
	else if (oper == 3)
	{
		printf("%d",num1*num2);

	}
	else if (oper == 4)
	{
		printf("%d",num1/num2);
	}

	return 0;
}