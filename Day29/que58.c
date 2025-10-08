#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element
    max = min = arr[0];

    // Compare each element
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}
