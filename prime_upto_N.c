#include<stdio.h>
void main()
  {
	int i,j,n,flag;
	printf("enter the Limit:");
	scanf("%d",&n);
	for (i=2;i<=n;i++)
	{
	flag=0;
	for (j=2;j<=i/2;j++)
	{
	if(i%j==0)
		flag=1;
	}
	if(flag==0)
	printf("%d \t",i);
	}
	}
