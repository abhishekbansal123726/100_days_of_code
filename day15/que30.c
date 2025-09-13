Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

//Solution ; Using loop tp reverse the places of the digits 

#include <stdio.h>

int main() {
    int n, rev = 0;
    scanf("%d", &n);   // input the number

    // loop until n becomes 0
    while (n > 0) {
        rev = rev * 10 + n % 10;  // taking last digit and build reverse
        n = n / 10;               // remove last digit
    }

    printf("%d", rev); // print reversed number
    return 0;
}
