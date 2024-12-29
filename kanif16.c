#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your choice");
    scanf("%c",&ch);
    switch(ch)
    {
    case'a':printf("your day is mon");
     break;
     case'b':printf("your day is tues");
     break;
     case'c':printf("your day is wed");
     break;
     case'd':printf("your day is thurs");
     break;
     case'e':printf("your day is fri");
     break;
     case'f':printf("your day is sat");
     break;
     case'g':printf("your day is sun");
     break;
    }
}