//This is my day 21 progress for 100 days of code challange

Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

//solution:
#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find divisors and add them
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check perfect number
    if (sum == num && num != 0)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}
