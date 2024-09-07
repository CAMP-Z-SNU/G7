/*
program to create a calculator application for two integers
*/

#include<stdio.h>
int main()
{

int a,b,option,y=1;
while(y==1)
{
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    printf("Enter your choice \n");
    scanf("%d",& option );
    switch(option)
    {

    case 1:
    printf("Sum =%d", a+b);
    break;
    case 2:
    printf("Difference=%d",a-b);
    break;
    case 3:
    printf("Product=%d",a*b);
    break;
    case 4:
    printf("Ratio=%d",a/b);
    }
        printf("\nPlease enter 1 to continue, 0 to terminate:\n");
        scanf("%d",&y);
}        
return 0;
}
/*
I dont know how to use while loop. Hence the difficulty level seemed high. It is 80 for me.
*/