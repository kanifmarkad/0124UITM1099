#include<stdio.h>
int main()
{
    int num1=2;
    float num2=3.14;
    char cha='J';
    printf("size of integer:%zu\n",sizeof(num1));
    printf("size of float:%zu\n",sizeof(num2));
    printf("size of char:%zu",sizeof(cha));
} 