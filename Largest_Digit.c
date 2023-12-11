#include<stdio.h>
int main()
{
	int n,reminder,largest=0;
	scanf("%d",&n);
	while(n>0)
	{
	    reminder=n%10;
	    if(largest<reminder)
	   {
	       largest=reminder;
	   }
	   n=n/10;
	}
		printf("%d",largest);
}