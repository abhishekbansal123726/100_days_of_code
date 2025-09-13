//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

 //solution:
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, pow10;
    
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    digits = (int)log10(num);   // number of digits - 1
    pow10 = (int)pow(10, digits);

    first = num / pow10;   // first digit
    last = num % 10;       // last digit

    // If number has only one digit, swapping not needed
    if (num < 10) {
        prin
