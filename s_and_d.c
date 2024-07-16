#include<stdio.h>
void main()
{
	int a,b,s,d,product;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	s=a+b;
	d=a-b;
	printf("sum of a and b\n %d+%d=%d\n",a,b,s);
	printf("difference of a and b\n %d-%d=%d\n",a,b,d);
	product=s*d;
	printf("product of sum and difference\n %d*%d=%d\n",s,d,product);
	

}
