// Calculator

#include<stdio.h>

int main()
{	
	int a,b;
	char ch;
	printf("Enter first number\n");
	scanf("%d",&a);
	printf("Select an operator : \n");
	scanf(" %c",&ch);

	printf("Enter second number\n");
	scanf("%d",&b);
	
	if(ch == '+')
	{
		printf("%d\n",a+b );
	}
	else if(ch == '-')
	{
		printf("%d\n",a-b );
	}
	else if(ch == '*')
	{
		printf("%d\n",a*b );
	}
	else if(ch == '/')
	{
		printf("%f\n", a/b );
	}
	return 0;
}