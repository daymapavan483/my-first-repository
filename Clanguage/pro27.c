#include<stdio.h>
void main()
{
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    
    if(num <=10)
    {
        printf("number is under series 1.");
    }
    else if(num <= 20)
    {
        printf("number is under series 10.");
    }
    else if(num <= 30)
    {
        printf("number is under series 20.");
    }
    else
    {
        printf(" number is outof range . ");
    }

    
}