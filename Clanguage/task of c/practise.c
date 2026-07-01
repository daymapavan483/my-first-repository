#include<stdio.h>
void main()
{
    char name[10];
    char subject[20];
    char result;
    
    printf("enter your name: ");
    scanf("%s",&name);
    
    printf("enter your subject: ");
    scanf("%s",&subject);
    
    printf("\nhello %s your subject is %s . enter 'y' for pass or enter'n' for fail .",name,subject);
    getchar();
    printf("\nenter your result: ");
    scanf("%c",&result);
    
    if(result=='y')
    {
        printf("congratulation");
    }
    else{
        printf("try once again and give your best ");
        
    }
    
}