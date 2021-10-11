#include<stdio.h>
int swap(int x,int y)
{
    int temp;
    temp = x;
    x = y;
    y = x;
    
}

int main()
{
int x =10;
int y = 20;
swap(x,y);
printf("%d\n %d",x,y);


    return 0;
}