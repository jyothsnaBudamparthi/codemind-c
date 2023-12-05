#include<stdio.h>
int main()
{
	int first=0,second=1,third,i,n,flag=0;
    scanf("%d",&n);//13
    third=first +second;//1
    while(third<=n)//5
	{
		if(third==n)//
		{
			flag=1;
			break;
		}
		third=first+second;//1+2=3
		first=second;//1
		second=third;//1
    }
    if(flag==1)
    {
    	printf("True");
	}
	else
	{
		printf("False");
	}
}
 
                      //  first   second  third

//  0      1       1     