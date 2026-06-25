// expected output a*b*c 2*4*6
#include<stdio.h>
void main()
{
    int num1,num2,num3,ans = 0;
    num1 = 2;
    num2 = 4;
    num3 = 6;
    ans = num1*num2*num3;
    
    printf("%d*%d*%d = %d",num1,num2,num3,ans);
}