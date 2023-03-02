#include<stdio.h>

int mult(int a , int b);
int add(int a , int b);
int sub(int a , int b);
int div(int a, int b);
int main()
{
	int x,y;
	printf("Enter the first digit :\n");
	scanf("%i",&x);
	printf("Enter the second digit :\n");
	scanf("%i",&y);
	int op =  mult( x, y) ;
	int op1 =  add( x, y) ;
	int op2 =  sub( x, y) ;
	float op3 = div(x,y);


	printf("%i\n",op);
	printf("%i\n",op1);
	printf("%i\n",op2);
	printf("%f\n",op3);
	return 0;
}

int mult(int a,int b)
{
	int product = a*b ;
	return product;

}
int add(int a,int b)
{
	int add = a+b ;
	return add;

}int sub(int a,int b)
{
	int sub = a-b ;
	return sub;

}
int div(int a,int b)
{
	int ans =a/b;
	return ans;
}
