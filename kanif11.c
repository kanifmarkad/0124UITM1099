#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your choice:ADD,SUB,MUL,DIV");
    scanf("%c",&ch);
    int a,b,c;
    printf("Enter 2 No.s");
    scanf("%d%d",&a,&b);

    switch(ch){
        case '+': c=a+b;
        printf("Addition is %d",c);
        break;
        case '-': c=a-b;
        printf("Sub is %d",c);
        break;
        case '*': c=a*b;
        printf("Mul is %d",c);
        break;
        case '/': c=a/b;
        printf("Div is %d",c);
        break;
        default:
        printf("Invalid");
    }
}