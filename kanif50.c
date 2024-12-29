#include<stdio.h>
float calculate(float base,float height)
{
    return 0.5*base*height;
}
int main(){
    float base,height,area;
    printf("Enter  height and base of triangle");
    scanf("%f%f",&base,&height);
    area=calculate(base,height);
    printf("The area of triangle is :%.2f",area);
}
