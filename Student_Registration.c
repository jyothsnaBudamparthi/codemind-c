#include<stdio.h>
int main()
{
  int i,t;  
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
    int m,k,n;
    scanf("%d%d%d",&n,&m,&k);
    if(m-k>=n)
    {
        printf("YES
");
    }
    else
    {
        printf("NO
");
    }
  }
}