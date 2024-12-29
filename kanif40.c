#include <stdio.h>

int main() {
    int num1, num2, *ptr1, *ptr2, sum;

    printf("Enter 2 No.s");
    scanf("%d%d",&num1,&num2);

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

}