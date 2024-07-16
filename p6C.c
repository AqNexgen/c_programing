#include<stdio.h>
int natural(int);
void main()
{
	int n,f;
	printf("enter the limit");
	scanf("%d",&n);
	f=natural(n);
	printf("sum of natural number :%d",f);
	
	

}
int natural(int i)
{
	if(i<=0)
	{
	 return 0;
	}
	else
	{
		return  (i+natural(i-1));
		
	}
}
