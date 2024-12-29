#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    printf("Enter a string: ");
    scanf("%s", str1);
    int length = strlen(str1);
    printf("Length of the string: %d\n", length);
}