#include<stdio.h>
void print(int n)
{
	 for(i=0;i<=n;i++)
	{
	printf("%d\t",&n);
	}
	

}
void main()
{
	int a[30],n,i;
	printf("enter the limit");
	scanf("%d",n)
	printf("enter the Elements");
	for(i=0;i<=n;i++)
	{
		scanf("%d",a[i]);
		print(n);
	}
}
