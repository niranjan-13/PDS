// Factorial recursion
#include<stdio.h>
int fibonacci(int i)
{
    if (i==0)
    {
        return 0;
    }
    if (i==1)
    {
        return 1;
    }
    return fibonacci(i-1)+fibonacci(i-2);

    
}

int main()
{
    int x;
printf("Enter the number : ");
scanf("%d",&x);

for (int  i = 0; i < x; i++)
{
    printf("%d \n",fibonacci(i));
}


    return 0;
}