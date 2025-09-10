Q2:  Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/


//Solution : For this int function plays a major role in dispaying mathematical operations from the given input by the user, Below is  how the code works

#include <stdio.h>

int main() {
    int a, b;
    
    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Performing sum diff prod quotient 
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int quotient = a / b; // integer division
    
    // Display results
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, prod, quotient);

    return 0;
}
