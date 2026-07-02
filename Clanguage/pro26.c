#include<stdio.h>
void main()
{
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("your number is even.");
    }
    else
    {
        printf("your number is odd. ");
    }

    
}