// Call  by  Reference
#include<stdio.h>
int swap(int *p1,int *p2)
{
    *p1 = 20 ;
    *p2 = 10 ;
    
}

int main()
{
int x =10;
int y = 20;
swap(&x,&y);
printf("%d\n %d",x,y);


    return 0;
}