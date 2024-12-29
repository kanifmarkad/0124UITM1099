#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
  {
    printf("The triangle is equilateral");
  }
    else if(a==b||a==c||b==c)
   {
    printf("The triangle is isosceles");
   }
   else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
   {
    printf("The triangle is right-angled");
   }
   else{
    printf("None of the above");
   }

}