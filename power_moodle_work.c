#include<stdio.h>
void main ()
{
    int i,p,q,pq=1;
    printf("enter the two number");
    scanf("%d%d",&p,&q);
    for (i=1;i<=q;i++)
    {
        pq*=p;
    }
    printf("%d",pq);
}