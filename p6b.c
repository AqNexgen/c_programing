#include<stdio.h>
int fact(int);
void main()
{
	int n,f;
	printf("enter the limit");
	scanf("%d",&n);
	f=fact(n);
	printf("%d factorial is:%d",n,f);
	
	

}
int fact(int a)
{
	if(a<=0)
	{
	 return 1 ;
	}
	else
	{
		return  (a*fact(a-1));
		
	}
}
