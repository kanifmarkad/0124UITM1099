#include <stdio.h>

int main() {
    float num1, num2, *ptr1, *ptr2, sum;


    printf("Enter the first number: ");
    scanf("%f", &num1);

    
    printf("Enter the second number: ");
    scanf("%f", &num2);

    
    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    printf("Sum of %.2f and %.2f is: %.2f\n", num1, num2, sum);

}