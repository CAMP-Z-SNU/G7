//To check whether a number is a palindrome or not 
#include <stdio.h>

int main() {
    int a, originalNumber, remainder, reversedNumber = 0;
    printf("Enter an integer: ");
    scanf("%d", &a);

    originalNumber = a; 

    
    while (a != 0) {
        remainder = a % 10;  
        reversedNumber = reversedNumber * 10 + remainder;  
        a /= 10;  
    }

    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
//Difficulty level: 25