#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=0;i<=100;i++){
        if(i%4==0)
        {
            sum +=i;
        }
    }
    printf("Sum is:%d",sum);
    
}