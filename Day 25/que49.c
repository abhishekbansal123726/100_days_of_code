#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for (i = 5; i >= 1; i--) {
        // Inner loop for numbers in each row
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}

