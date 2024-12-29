#include <stdio.h>

int main() {
    int num1, num2,*ptr1,*ptr2, product;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    ptr1=&num1;
    ptr2=&num2;
    
    product =*ptr1 * *ptr2;

    printf("Product of %d and %d is: %d\n", num1, num2, product);

}