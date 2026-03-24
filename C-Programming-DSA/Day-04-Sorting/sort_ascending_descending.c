#include <stdio.h>

int main() {
    int arr[100], n, choice;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("1. Ascending\n2. Descending\nEnter choice: ");
    scanf("%d", &choice);

    // Sorting (Bubble Sort logic)
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {

            if((choice == 1 && arr[j] > arr[j+1]) ||
               (choice == 2 && arr[j] < arr[j+1])) {

                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted Array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}