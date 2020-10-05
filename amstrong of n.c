#include<stdio.h>
#include<math.h>
int n,temp,temp1,digit,count=0,rem,s=0;
int main()
{
    printf("enter the value of n:");
    scanf("%d",&n);
    temp = n;
    temp1 = temp;
    while(n!=0)
    {
        digit = n%10;
        count = count + 1;
        n/=10;
    }
    while(temp!=0)
    {
        rem = temp%10;
        s = s + pow(rem,count);
        temp/=10;
    }
    if(s == temp1)
    {
        printf("amstrong.");
    }
    else
      printf("not amstrong.");
    return 0;
    
}
