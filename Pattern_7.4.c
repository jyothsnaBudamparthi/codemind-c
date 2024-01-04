#include<stdio.h>
int main()
{
    int n,i,j,p;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(p=i;p>=1;p--)
        {
            printf("%c ",64+i);
        }
        printf("
");
        
    }
}