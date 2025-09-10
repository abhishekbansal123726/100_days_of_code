Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

//Solution : Compare the three numbers using if–else.If a >= b and a >= c, then a is largest.Else if b >= a and b >= c, then b is largest.Otherwise, c is largest.

#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check which is largest
    if (a >= b && a >= c) {
        printf("Largest is %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("Largest is %d\n", b);
    }
    else {
        printf("Largest is %d\n", c);
    }

    return 0;
}
