#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Calculate series sum
    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;      // increases by 2 each time
        denominator += 4;    // increases by 4 each time
    }

    // Display result
    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
