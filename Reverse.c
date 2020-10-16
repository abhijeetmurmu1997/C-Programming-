#include<stdio.h>
int n,r,rem;
int rev=0;
int main()
{
    printf("enter the number:");
    scanf("%d", &n);
    for(;n!=0;)
    {
        rem = n%10;
        rev = rev * 10 + rem;
        n/=10;
    }
    printf("reveerse:%d",rev);
    return 0;
}