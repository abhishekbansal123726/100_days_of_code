
This is my day 14 progress for 100 days of code challenge 

Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

//Solution: the sum of first n terms can be done using the logic of 2*i -1 

#include <stdio.h>

int main() {
    int n, sum = 0, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);   // formula for ith odd number
    }

    printf("%d\n", sum);

    return 0;
}
