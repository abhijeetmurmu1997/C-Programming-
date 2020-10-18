#include<stdio.h>
int traverseArray();
int insertArray();
int deleteArray();
int main()
{
	int n;
	int arr[100];
	printf("----------------------------------------\n");
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	traverseArray(arr,n);
}
int traverseArray(int brr[], int x)
{
	int i;
	printf("The elements are\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&brr[i]);
	}
	printf("----------------------------------------\n");
	printf("The unsorted elments entered are\n");
	for(i=0;i<x;i++)
	{
		printf("%d\t",brr[i]);
	}
	printf("\n----------------------------------------\n");
	insertArray(brr,x);
}
int insertArray(int crr[], int p)
{
	int i,key,loc;
	printf("\nEnter the key element to be inserted:");
	scanf("%d",&key);
	printf("----------------------------------------\n");
	printf("Enter the location at which element to be inserted:");
	scanf("%d",&loc);
	printf("----------------------------------------\n");
	for(i=p-1;i>=loc-1;i--)
	{
		crr[i+1] = crr[i];
	}
	crr[loc-1] = key;
	p++;
	printf("After insertion, the array is\n");
	for(i=0;i<p;i++)
	{
		printf("%d\t",crr[i]);
	}
	printf("\n----------------------------------------\n");
	sortArray(crr,p);
}
int sortArray(int drr[], int k)
{
	int i,j,temp = 0,flag = 0;
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(drr[i] > drr[j])
			{
				temp = drr[j];
				drr[j] = drr[i];
				drr[i] = temp;
				flag++;
			}
		}
		if(flag == 0)
		{
			break;
		}
	}
	printf("\nThe sorted array is\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",drr[i]);
	}
	printf("\n----------------------------------------\n");
	deleteArray(drr,k);
}
int deleteArray(int err[], int q)
{
	int i,loc1,temp = 0;
	printf("\nEnter the location to delete the element form the array:");
	scanf("%d",&loc1);
	temp = err[loc1-1];
	printf("----------------------------------------\n");
	for(i=loc1-1;i<q;i++)
	{
		err[i]  = err[i+1];
	}
	q--;
	printf("After deletion\n");
	for(i=0;i<q;i++)
	{
		printf("%d\t",err[i]);
	}
	printf("\n----------------------------------------\n");
	printf("Element deleted : %d", temp);
}	

//it's always a good practice to program daily :)
