#include<stdio.h>
int main()
{
	int a,i;
	printf("Enter a number :\n");
	scanf("%d",&a);

	if(a<1)
	{
		printf("Enter a valid number\n");

	}
	else if(a ==2)
	{
		printf("It is a prime number\n");
	}
	else
	{
		for ( i = 2; i < a; ++i)
	{
		if (a%i == 0)
		{
			printf("It is not prime\n");
			break;
		}
		else
		{
			printf("It is a prime number\n");
			break;
		}
	}

	}
	

		


	return 0;
	
}