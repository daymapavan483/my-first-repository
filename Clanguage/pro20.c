#include<stdio.h>
void main()
{
    int num1;
    
    num1 = 10;
    printf("size of num1: %d",sizeof(num1));
    printf("\nsize of int: %d",sizeof(int));
    printf("\nsize of float: %d",sizeof(float));
    printf("\nsize of double: %d",sizeof(double));
    printf("\nsize of char: %d ",sizeof(char));
}