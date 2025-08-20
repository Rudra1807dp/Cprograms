#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter the value of gross salary");
    scanf("%f",&a);
b=.10*a;
c=.03*a;
d=a+b-c;
printf("the alowance is :%f\n the deduction is :%f\n the net salary is :%f");
}