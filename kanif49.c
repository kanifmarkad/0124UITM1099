#include <stdio.h>
#include <string.h>
struct Student {
    int roll_no;
    char name[10];
    int class;
    char division[2];
};

int main() {
    struct Student students[20];

    for (int i = 0; i <= 20; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Class: ");
        scanf("%d",&students[i].class);

        printf("Division: ");
        scanf(" %s", students[i].division); 
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i <= 20; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Class: %d\n", students[i].class);
        printf("Division: %s\n", students[i].division);
    }

}