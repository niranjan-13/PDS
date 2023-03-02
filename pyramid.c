#include<stdio.h>

int main()
{
	int a;
	printf("Enter the rows :\n");
	scanf("%d",&a);
	for (int i = 1; i <=a; ++i)
	{

		for (int j = i; j<=a; ++j)
		{
			/* code */
			printf(" #");
		}
		printf("\n");
	}


	return 0;
}
