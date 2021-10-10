#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number :\n");
	scanf("%d",&a);
	for (int i = 1; i < 11; ++i)
	{
		printf("%d x %d = %d \n",a,i,a*i);
	}

	return 0;
}