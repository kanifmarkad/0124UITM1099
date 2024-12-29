#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowel_count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = (str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel_count++;
        }
    }

    printf("Total number of vowels in the string: %d\n", vowel_count);

}