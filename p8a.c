#include<stdio.h>
void arr(int a[ ],int x)
{
	 int i;
	 for(i=0;i<x;i++)
	{
	printf("%d\t",a[i]);
	}
	

}
void main()
{
	int a[30],n,i;
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the Elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	arr(a,n);
}
