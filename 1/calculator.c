/*         Creating a CALCULATOR application
                   using WHILE loop               */


#include<stdio.h>
int main()
{

int a,b,option,y=1;
while(y==1)
{
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("choose an operation to be performed\n1 for +\n2 for -\n3 for *\n4 for /\n");
    scanf("%d",& option );
    switch(option)
    {

    case 1:
    printf("%d+%d=%d",a,b,a+b);
    break;
    case 2:
    printf("%d-%d=%d",a,b,a-b);
    break;
    case 3:
    printf("%d*%d=%d",a,b,a*b);
    break;
    case 4:
    printf("%d/%d=%d",a,b,a/b);
    }
        printf("\nPlease enter 1 to continue, 0 to terminate:\n");
        scanf("%d",&y);
}        
return 0;
}
                      // difficulty level : 85/100   //