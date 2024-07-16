#include<stdio.h>
void prime();
void main()
{
  prime();
  }
  void prime()
  {
	int i,p,flag=0;
	printf("enter the number:");
	scanf("%d",&p);
	for (i=2;i<p/2;i++)
	{
	if(p%i==0)
		flag=1;
	}
	
	if (flag==1)
		printf("%d is not prime",p);
	else
		printf("%d is prime",p);
	}
