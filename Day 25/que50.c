#include <stdio.h>

int main() {
    int i, j, k;

    // Outer loop for rows
    for (i = 1; i <= 5; i++) {
        // Print leading spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for (k = i; k <= 5; k++) {
            printf("*");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}

