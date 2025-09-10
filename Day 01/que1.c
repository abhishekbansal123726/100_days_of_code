Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/


// Soution : This Code can be majorly done using printf and scanf functions,  as follows :-

#include <stdio.h>


int main() {
    int x, y, sum;

    // Taking the value from the user 
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    // Processing the sum between the two numbers
    sum = x + y;

    // Final output
    printf("The sum of %d and %d is: %d\n", x, y, sum);

    return 0;
}
