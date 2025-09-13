//This is my day 22 progress for 100 days of code challange

//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

//solution:
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Input n
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Calculate sum
    for (int i = 1; i <= n; i++) {
        sum += (double)(2 * i - 1) / (2 * i);
    }

    // Print result
    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
