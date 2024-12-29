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

    int even_sum = 0, odd_sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_sum += arr[i];
        } else {
            odd_sum += arr[i];
        }
    }

    printf("Sum of even elements: %d\n", even_sum);
    printf("Sum of odd elements: %d\n", odd_sum);


}