#include<stdio.h>
void linear(int[],int);
void main()
	{
		int array[30],i,n;
		printf("enter the limit");
		scanf("%d",&n);
		printf("enter the integer elements ");
		for(i=0;i<n;i++)
		{
			scanf("%d",&array[i]);
		}
		linear(array,n);
}
void linear(int a[],int x)
{
	int search,i,flag=0;
	printf("enter search element ");
	scanf("%d",&search);
	for(i=0;i<x;i++)
	{
		if (search==a[i])
		{
		flag=1;
			}
	}
		if (flag==1)
		{
		printf("%d is element present in array",search);
		}
		else
		{
		printf("enter the elements is not present ");
		}
}
