#include<stdio.h>
int arm(int);
void main()
{
		int d,s;
		printf("enter the digit");
		scanf("%d",&d);
		s=arm(d);
			if ( d==s)
			printf("%d is a Armstrong number",d);
			else
			printf("%d is a not Armstrong number",d);
			}
		
int arm(int n)
		{	
		int i,arm=0,r;
		while(n>0)
		{
		r=n%10;
		arm=arm+(r*r*r);
		n=n/10;
		}
		return arm;
		}
