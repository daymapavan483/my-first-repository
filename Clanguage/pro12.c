// swap two value with temp variable
#include<stdio.h>
void main()
{
    int a,b,c;// here c is my temp variable 
    a= 10;
    b= 20;
    
    printf("----before swaping----");
    printf("\nA = %d",a);
    printf("\nB = %d",b);
    
    c=a;
    a=b;
    b=c;
    printf("\n----after swaping----");
    printf("\nA = %d",a);
    printf("\nB = %d",b);
    
}