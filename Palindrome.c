#include<stdio.h>
int n,rem,rev=0,original;
int main()
{
    printf("enter the value of n:");
    scanf("%d",&n);
    original = n;
    while(n!=0)
    {
        rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }
    if(original==rev)
    {
        printf("palindrome.");
    }
    else
    printf("not palindrome.");
    return 0;
}