#include<stdio.h>
int bsearch(int [ ],int ,int,int);
int main()
{
	int array[30],n,search,pos
	printf("enter the limit ");
	scanf("%d",&n);
	printf("NOTE: please enter elements in ascending order\n enter the elements in order");
	for(i=0;i<n;i++)
	{
	scanf("%d",&array[i]);
	}
	printf("enter the search element");
	scanf("%d",&searh);
	pos=bsearch(array,0,n,search);
	if(pos==-1)
	{
		printf("The search element is not present");
	}
	else{ 
		printf("%d is present in  as position %d",s,pos);
	}
}
int bsearch(int a[ ],int l,int h,int s )
{
	int mid;
	mid=(l+h)/2;
	if(a[mid]==s)
	{
		return mid ;
	}
	else if (l>h)
	{
		return -1;
	}
	else if (a[mid]>s)
	{
		bsearch(a,l,h,mid-1,s);
	}
	else
	{
		bsearch(a,mid=1,h,s);
	}

}

