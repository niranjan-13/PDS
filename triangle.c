#include<stdio.h>

bool triangle(int a,int b,int c);

int main(void)
{	

	int x,y,z ;
	printf("Enter first side :\n");
	scanf("%i",&x);
	printf("Enter second side :\n");
	scanf("%i",&y);
	printf("Enter third side :\n");
	scanf("%i",&z);

	printf("%B ",triangle());

	return 0;
}

bool triangle(int a,int b,int c)
{
	if((a,b,c) > 0 && a+b > c && b+c > a && a+c > b )
	{
		return true;
	}
	else
	{
		return false;
	}


}