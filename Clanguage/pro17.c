// accept name from user 
#include<stdio.h>
#include<conio.h>
void main()
{
    char name[10];
    char subject[20];
    int score;
    int age;
    char choice;
    
    printf("enter the name: ");
    scanf("%s",&name);
    
    printf("\nenter your subject: ");
    scanf("%s",&subject);
    
    getchar();
    
    printf("\nenter your score: ");
    scanf("%d",&score);
    
    printf("\nenter your age: ");
    scanf("%d",&age);
    
    getchar();
    
    printf("\nhii, %s your subject is %s and your score  is %d .",name,subject,score);
    printf("\n you are %d years old now.",age);
    printf("\ndo you want to continue? press 'y' for yes and press 'n' for no: ");
    scanf("%c",&choice);
   // getchar();
    printf("\nand your choice is :%c",choice);
    

}