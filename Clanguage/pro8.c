// expected answer 15/2 = 7.50
#include<stdio.h>
void main()
{
    float num1, num2,ans;
    
    num1 = 15;
    num2 = 2;
    ans = num1/num2;
    
    printf("%0.f / %0.f = %0.2f",num1,num2,ans);
}