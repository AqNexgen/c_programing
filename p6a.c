#include<stdio.h>
int nat(int);
void main()
{
	int n;
	printf("enter the limit");
	scanf("%d",&n);
	printf("natural numbers:");
	nat(n);
	

}
int nat(int a)
{
	if(a==0)
	{
	 return a ;
	}
	else
	{
		nat(a-1);
		printf("%d\t",a);
	}
}
