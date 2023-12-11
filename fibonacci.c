#include<stdio.h>
int main()
{
	int first=0,second=1,third,i,n;
	scanf("%d",&n);//5
	printf("%d %d ",first,second);
	for(i=3;i<=n;i++)//i=3  6<=5
	{
		third=first+second;//1+2=3
		printf("%d ",third);//3
		first=second;//1
		second=third;//1
	}
}