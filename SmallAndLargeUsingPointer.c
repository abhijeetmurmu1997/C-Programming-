#include<stdio.h>
int minMax();
int main()
{
	int arr[] = {10,20,30,40,50,60,70,80,12,3,534,5745,1};
	int min,max;
	int l = sizeof(arr)/sizeof(arr[0]);
	printf("Lenght of array is:%d\n",l);
	minMax(arr,l,&min,&max);
	printf("Minimun number is : %d and Maximum number is : %d",min,max);
}
int minMax(int brr[],int n,int *p,int *q)
{
	*p = brr[0];
	*q = brr[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(brr[i] < *p)
		{
			*p = brr[i];
		}
		else
		*q = brr[i];
	}
}
