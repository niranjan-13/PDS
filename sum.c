#include<stdio.h>
int main()
{

	int a;
	int sum=0 ;
	printf("Enter a number :\n");
	scanf("%d",&a);

	for (int i = 1; i <=a; ++i)
	{
		sum = sum+i;
		/* code */
	}
	printf("%d\n",sum );

	return 0;
}