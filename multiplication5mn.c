#include<stdio.h>
void main()
{
	int i,n,m;
	printf("note: Enter the limits of multiple of 5.\n");
	printf("enter below and above limits\n\t");
	scanf("%d%d",&m,&n);
	if(m%5==0 && n%5==0)
	{
	printf("multiple of 5:\n");
	for (i=m+1;i<n;i++){
	if(i%5==0)
	printf("%d\n",i);
	}
	}
	else
	printf("your enter number is not multiple of 5");
}
