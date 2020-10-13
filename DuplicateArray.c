#include<stdio.h>
int main()
{
	int arr1[50], arr2[50];
	int n,j,i,count=0;
	printf("enter the no. of elements:");
	scanf("%d",&n);
	printf("the elements are:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
		arr2[i] = 100;         //any number can be defined here to store in arr2[].
	}
	for(i=0;i<n;i++)
	{
		count = 1;
		for(j=i+1;j<n;j++)
		{
			if(arr1[i] == arr1[j])
			{
				count++;
				arr2[j] = 0;
			}
		}
		if(arr2[i]!=0)
		{
			arr2[i] = count;
		}
	}
	printf("DUPLICATE NUMBERS:\n");
	for(i=0;i<n;i++)
	{
		if(arr2[i] > 1)
		{
			printf("%d \t",arr1[i]);
		}
	}
}
