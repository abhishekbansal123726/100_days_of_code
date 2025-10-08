#include <stdio.h>

int main() {
    int n, i, pos, key;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &key);

    // Shift elements to the right from the given position
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the position
    arr[pos] = key;
    n++; // increase size

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
