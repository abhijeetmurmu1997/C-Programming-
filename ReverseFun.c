#include<stdio.h>
int reverseNum(int n);
int main()
{
    int a,rev;
    printf("enter the number:");
    scanf("%d",&a);
    rev = reverseNum(a);
    printf("%d",rev);
    return 0;
}
int reverseNum(int n)
{
    int rem,rev = 0;
    for(;n!=0;)
    {
        rem = n%10;
        rev = rev * 10 + rem;
        n/=10;
    }
    return rev;
}
