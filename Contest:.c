#include<stdio.h>
int main()
{
    int a,x,y;
    scanf("%d%d%d",&a,&x,&y);
    if(a<=(x+(2*y)))
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}