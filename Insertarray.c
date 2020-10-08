#include<stdio.h>
int main()
{
	int arr[40],i,n,key,loc;
	printf("Enter the limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to be inserted:");
	scanf("%d",&key);
	printf("enter location of the array to be inserted:");
	scanf("%d",&loc);
	for(i=n-1;i>=loc;i--)
	{
		arr[i+1] = arr[i];
	}
	arr[loc]=key;
	n++;
	printf("After insertion, array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;	
}
