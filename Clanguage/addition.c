#include<stdio.h>
void main()
{
    int num1,num2,ans=0;// here we take o value of ans because whenever we are not give value 
                            //then it give me garbage value whenever we get dynamic value.
    
    num1= 20;
    num2 = 30;
    ans = num1+num2;
    
    printf("addittion of a and b : %d",ans);
}