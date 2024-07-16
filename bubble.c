#include<stdio.h>
void bubble(int[],int);
void main ()
{
	int i,n,array[30];
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the elemets");
	for (i=0;i<n;i++)
	{
		scanf ("%d\n",&array[i]);
	}
	bubble(array,n);
	
}
void  bubble (int a[ ] ,int lim)
{
	int i,j,temp;
	for(i=0;i<lim;i++)
	{
		for (j=0;j<lim-i-1;j++)
		{
		if (a[j]<a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		}
		}
		printf("%d\t",a[j]);
	}
	

}
