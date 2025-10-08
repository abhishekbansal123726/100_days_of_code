#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}; // to store frequency of digits 0–9
    int digit, maxDigit = 0, maxCount = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    for (digit = 0; digit < 10; digit++) {
        if (count[digit] > maxCount) {
            maxCount = count[digit];
            maxDigit = digit;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}
