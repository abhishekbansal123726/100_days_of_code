Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

//Solution : To code this  store the sum of the two numbers in one variable, then use subtraction twice to recover the original values in swapped positions. 

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap without third variable (using arithmetic)
    a = a + b;  //adding  both numbers
    b = a - b;  //subtract new b from sum → gives original a
    a = a - b;  //subtract new b from sum → gives original b

    // Display result
    printf("After swap: %d %d\n", a, b);

    return 0;
}
