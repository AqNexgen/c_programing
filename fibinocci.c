#include<stdio.h>
void fib();
void main()
{
	fib();
}
	void fib()
	{
	int i,a,b,c,n;
	printf("enter the limit\n");
	scanf("%d",&n);
	printf("Fibinocci series:\n");
	a=0;
	b=1;
	printf("%d\t%d\t",a,b);
	for (i=1;i<=n-2;i++){
	c=a+b;
	printf("%d\t",c);
	a=b;
	b=c;
	}
}
