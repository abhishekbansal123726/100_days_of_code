Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

//Solution : For solving this we need to have 3 varibales out of which 2 will be constant and 1 will be temporary 

#include <stdio.h>

int main() {
    int a, b, akshit;

    // Taking input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swaping using variable "akshit"
    akshit = a;
    a = b;
    b = akshit;

    // Printing output
    printf("After swap: %d %d\n", a, b);

    return 0;
}
