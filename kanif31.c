#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Elements in the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Position %d: %d\n", i + 1, arr[i]);
    }

}