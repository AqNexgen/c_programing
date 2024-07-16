#include<stdio.h>
void main()
{
	int i,n1,n2;
	printf("enter below and above limits\t");
	scanf("%d%d",&n1,&n2);
	if(n1<n2)
	{
	printf("natural numbers:\n");
	for (i=n1;i<=n2;i++){
	printf("%d\n",i);
	}
	}
	else
	printf("error");
}
