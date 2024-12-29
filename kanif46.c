#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    int class;
    char division[2];
};    
int main(){
     struct student s1;
     printf("Enter Roll no");
     scanf("%d",&s1.roll_no);
     printf("Enter Name");
     scanf("%s",s1.name);
     printf("Enter Class");
     scanf("%d",&s1.class);
     printf("Enter  Division");
     scanf("%s",s1.division);
     printf("\n");
     printf("Student info.\n");
     printf("Roll no.%d\n",s1.roll_no);
     printf("Name.%s\n",s1.name);
     printf("class.%d\n",s1.class);
     printf("Division.%s\n",s1.division);
}
