#include<stdio.h>
int n,rem,res = 0,origin;
int main()
{
    printf("enter a 3 digit number:");
    scanf("%d",&n);
    origin = n;
    while(n!=0)
    {
        rem = n%10;
        res = res + (rem*rem*rem);
        n/=10;
    }
    if(origin==res)
    {
        printf("the number is amstrong.");
    }
    else
    printf("the number is not amstrong.");
    return 0;
}
