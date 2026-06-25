// expected answer 15/2 = 7.50
#include<stdio.h>
void main()
{
    float num1, num2,num3,num4,addition=0,multiplication=0,subsctraction=0,division=0;
    
    num1 = 15;
    num2 = 2;
    num3 = 4;
    num4 = 45;
    addition = num1+num2+num3+num4;
    multiplication=num1*num2*num3*num4;
    subsctraction = num1-num2-num3-num4;
    division = num1/num2/num3/num4;
    
    printf("addition: %0.f +%0.f +%0.f +%0.f = %0.f",num1,num2,num3,num4,addition);
    printf("\nmultiplication: %0.f *%0.f *%0.f *%0.f = %0.f",num1,num2,num3,num4,multiplication);
    printf("\nsubtraction: %0.f -%0.f -%0.f -%0.f = %0.f",num1,num2,num3,num4,subsctraction);
    printf("\ndivision: %0.f /%0.f /%0.f /%0.f = %0.f",num1,num2,num3,num4,division);
}