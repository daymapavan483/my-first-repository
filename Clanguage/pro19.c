#include<stdio.h>
void main()
{
    int num1 ,num2;
    int result;
    
    printf("enter num1:");
    scanf("%d",&num1);
    
    printf("enter num2: ");
    scanf("%d",&num2);
    
    result= num1>num2 ? num1 : num2;
    
    printf("gretest number is %d",result);
    
}