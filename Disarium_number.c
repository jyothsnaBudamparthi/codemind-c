#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,i=0,sum=0,r;
    scanf("%d",&n);
    b=n;
    a=n;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    for(i;i>0;i=i-1)
    {
        r=a%10;
        sum=sum+pow(r,i);
        a=a/10;
    }
    if(b==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
        