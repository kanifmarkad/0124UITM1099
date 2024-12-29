#include<stdio.h>
struct employee
{
    int emp_id;
    char name[30];
    int salary;
    char Designation[20];
};
int main(){
    struct employee s1;
    printf("Enter employee id.");
    scanf("%d",&s1.emp_id);
    printf("Enter Name");
    scanf("%s",s1.name);
    printf("Enter salary");
    scanf("%d",&s1.salary);
    printf("Enter designation");
    scanf("%s",s1.Designation);
    printf("\n");
    printf("employee info.\n");
    printf("Emp_id:%d\n",s1.emp_id);
    printf("Name.%s\n",s1.name);
    printf("Salary:%d\n",s1.salary);
    printf("Designation.%s\n",s1.Designation);

}
