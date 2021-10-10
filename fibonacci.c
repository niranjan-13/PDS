#include <stdio.h>

int main()
{	
	int x = 0 , op;
	int y = 1;

	int a;
	printf("Enter a number :\n");
	scanf("%d",&a);
	printf("0\n1\n");
	for (int i = 2; i < a; ++i)
	{	
		op = x+y ; 

		printf("%d\n", op);

		x = y ;

		y = op ;

	}



	return 0;
}