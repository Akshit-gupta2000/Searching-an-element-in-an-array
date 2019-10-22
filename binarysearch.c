#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i,j,k;
	printf("enter the size of array:");
	scanf("%d",&i);
	int n[i];
	printf("\nenter the numbers in ascending order:\n");
	for(j=0;j<i;j++)
	{
		scanf("%d",&n[j]);
	}
	printf("the elements of array are:\n");
	for(j=0;j<i;j++)
	{
		printf("%d",n[j]);
	}
	printf("\n");
	printf("enter the element to be bianry searched:");
	scanf("%d",&k);
	int f=0,r=i-1,key=k;
	binarysearch(n,f,r,key);
}


void binarysearch(int a[],int f,int r,int key)
{
	int mid=(f+r)/2;
	while(f<=r)
	{
		if (a[mid]==key)
		{
		printf("element found at %d",mid+1);
		break;
	    }
		else if (a[mid]<key)
		{
		 binarysearch(a,mid+1,r,key);
		 break;
	    }
		else
		{
		 binarysearch(a,f,mid-1,key);
		 break;
	    }
	}
}
