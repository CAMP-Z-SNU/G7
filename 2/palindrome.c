/*
The question is check wheather the number is palindrome or not 
*/
#include <stdio.h>
int main(){
int n,num,digit,rev=0;
printf("enter the positive number");
scanf("%d",&num);
n=num;
while(num>0){
digit=num%10;
rev=rev*10+digit;
num=num/10;}
printf("the reverse of a number is %d\n",rev);
if(n==rev)
printf("the given number is a palindrome\n");
else
printf("the given number is not a palindrome\n");
return 0;
}
/*
Difficulty level is 25
*/
    
