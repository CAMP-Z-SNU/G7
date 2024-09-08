//   Check a number if it is prime number    //
    

#include <stdio.h>
int main(){
    int n,i,count=0;
    printf("enter a positive integer:");
    scanf("%d",&n);
    for (i=2;i<n;i++){
        if (n % i == 0){
            count++;
            break;
        }
    }
    if (count==0)
        printf("%d is a prime number\n",n);
    else
        printf("%d is not a prime number\n",n);
    if (n==1)
        printf("%d is neither prime nor composite\n",n);
    

    return 0;


}
       //   Difficulty level  : 25/100    //