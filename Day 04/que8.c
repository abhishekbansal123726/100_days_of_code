
Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

//Solution The logic is: add all numbers from 1 up to n (i.e., 1+2+3+…+n) using a loop 

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate sum using loop
    for (int i = 1; i <= n; i++) {
        sum += i;  // add each natural number
    }

    // Display result
    printf("Sum=%d\n", sum);

    return 0;
}

	
