#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3NO.");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("A is larger");
    }
    else if(b>a&&b>c)
    {
        printf("B is larger");
    }
    else{
        printf("C is larger");
    }
}
