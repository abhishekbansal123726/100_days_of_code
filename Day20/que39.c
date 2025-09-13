//This is my days 20 progress for 100 days of code challange


Q39: Write a program to find the product of odd digits of a number. 
/* Sample Test Cases:
Input 1:
12345 
Output 1:
15 (1*3*5)

Input 2:
2468 
Output 2:
1 (no odd digits, assume 1) 

*/

#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    int hasOdd = 0;  // to track if odd digit exists

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Work on each digit
    while (num > 0) {
        digit = num % 10;   // extract last digit
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;  // remove last digit
    }

    // If no odd digits found, product remains 1
    printf("Product of odd digits = %d\n", product);

    return 0;
}
