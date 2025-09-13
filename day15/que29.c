This is my day 15 of 100 days of code challenge 

Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

//Solution : using long long function for precise value 

#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;   // factorial can be large, so using long long

    // Input number
    scanf("%d", &n);

    // Calculate factorial
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    // Output result
    printf("%lld", fact);

    return 0;
}

