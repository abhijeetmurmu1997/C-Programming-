#include<stdio.h>
int main()
{
    int arr[10] = {10,20,30,4,56,30000,95,27,96,4003};
    int large = arr[0];
    int i;
    for(i=1;i<10;i++)
    {
        if(arr[i]>large)
        {
            large = arr[i];
        }
    }
    printf("largest:%d",large);
    return 0;
}
