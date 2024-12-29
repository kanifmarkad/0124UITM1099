#include<stdio.h>
int main()
{
    int a,b,c,d,Total_amount;
    printf("The no. of 10 rupees coins");
    scanf("%d",&a);
    printf("The no of 5 rupees coins");
    scanf("%d",&b);
    printf("The no of 2 rupees coins");
    scanf("%d",&c);
    printf("The no of 1 rupees coins");
    scanf("%d",&d);
    Total_amount=10*a+5*b+2*c+1*d;
    printf("Total amount is:%d",Total_amount);


}