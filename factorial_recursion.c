// Factorial recursion
#include<stdio.h>
int fact(int x)
{
    if (x<=0)
    {
        return 0;
    }
    return x*fact(x-1);
    
    
}

int main()
{
    int x;
printf("Enter the number : ");
scanf("%d",&x);

printf("%d",fact(x));

    return 0;
}