#include<stdio.h>
int main()
{
    char ch;
    int a=10,b=30,c;
    printf("Enter your choice");
    scanf("%c",&ch);
    switch(ch)
    {
        case'+': c=a+b;
                printf("Add is:%d",c);
             break;
        case'-': c=a-b;
                printf("Sub is:%d",c);
             break;
        case'*': c=a*b;
                printf("Mul is:%d",c);
             break;
        case'/': c=a/b;
                printf("Div is:%d",c);
             break;
        default:
        printf("None of the above");

    }
}