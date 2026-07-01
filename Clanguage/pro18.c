#include<stdio.h>
void main()
{
    int a,b;
    
    a=10;
    b=20;
    printf("before operator :  a=%d b=%d",a,b);
    //a = a+b; here a is perform operator and save after perform 
    a+=b;// here a store the value of a+b
    printf("\nafter operator: sum= %d",a);
}