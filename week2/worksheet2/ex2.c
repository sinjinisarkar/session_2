#include <stdio.h>

int main() {
    int n; // Number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n]; // Declare an array of 'n' integers

    // Input the elements of the array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Reverse the array
    for (int i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    // Print the reversed array
    printf("Reversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
