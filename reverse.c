#include<stdio.h>
int revd(int);
void main()
{
		int d,s;
		printf("enter the digit");
		scanf("%d",&d);
		s=revd(d);
			printf("reverse of digit %d=%d",d,s);
}
		
int revd(int n)
		{	
		int i,rev=0,r;
		while(n>0)
		{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
		}
		return rev;
		}
