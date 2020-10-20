#include<stdio.h>
int main()
{
	int arr[40];
	int n,i,key,loc;
	printf("enter the no.");
	scanf("%d",&n);
	printf("the elements are:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element:");
	scanf("%d",&key);
	printf("enter the location:");
	scanf("%d",&loc);
	arr[n] = arr[loc-1];
	arr[loc-1] = key;
	n++;
	printf("final array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
