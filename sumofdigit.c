#include<stdio.h>
int sumd(int);
void main()
{
		int d,s;
		printf("enter the digit");
		scanf("%d",&d);
		s=sumd(d);
			printf("sum of digit %d=%d",d,s);
}
		
int sumd(int n)
		{	
		int i,sum=0,r;
		while(n>0)
		{
		r=n%10;
		sum=sum+r;
		n=n/10;
		}
		return sum;
		}
