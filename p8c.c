#include<stdio.h>
int sam(int [ ],int);
void check(int);
void main()
{
	int s[30],i,n,add;
	printf("enter the  limit");
	scanf("%d",&n);
	printf("enter the  Elements");
	//read number of array
	for (i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	add=sam(s,n);
	printf("sum of the array =%d\n",add);
	check(add);
	}
int sam(int a[ ],int n)
{
	//sum of the array
	int sm,i;
	for (i=0;i<n;i++)
	{
		sm=sm+a[i];
	}
	return sm;
}
void check(int z)
{
	if(z%2==0)
	{
		printf("\n%d is a even number",z);
	}
	else
	{
		printf("%d is a odd number",z);
	}
}
