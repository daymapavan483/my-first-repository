//swap two value without temp variable
#include<stdio.h>
void main()
{
    int a,b;
    a= 10;
    b= 20;
    
    printf("----before swaping----");
    printf("\nA = %d",a);
    printf("\nB = %d",b);
    
    
   a = a+b; //a=10+20  a=30
   b = a-b; //b= 30-20 b=10
   a = a-b; //a= 30-10 a=20
    printf("\n----after swaping----");
    printf("\nA = %d",a);
    printf("\nB = %d",b);
    
}