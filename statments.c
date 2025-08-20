#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        printf("the largest number is %d",a);
          printf("the smallest number is %d",b);
    }
else if(b>a)
{
    printf("the largest is %d",b);
    printf("the smallest is %d",a);
}
}