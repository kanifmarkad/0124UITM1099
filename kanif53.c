#include <stdio.h>
int swap(int a, int b) {
    int c=a;
    a=b;
    b=c;
    printf("a=%d b=%d",a,b);
}

int main() {
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap(a,b);

}