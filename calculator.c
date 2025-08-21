#include<stdio.h>
int main()
{
    int num1,num2,choice,result;
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);
    printf("choose an operation:\n");
    printf("1. Addition\n");
    printf("1. Substraction\n");
    printf("1. Multiplication\n");
    printf("1. Division\n");
    printf("Enter your choice(1-4):");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
    result= num1+num2;
    printf("result = %d",result);
    break;
      case 2:
    result= num1-num2;
    printf("result = %d",result);
    break;
      case 3:
    result= num1*num2;
    printf("result = %d",result);
    break;
      case 4:
      if(num2 !=0)
      {
    result= num1/num2;
    printf("result = %d",result);
      }
    else 
    {
        printf("Division with 0 is not allowed\n");
    }
    break;
    default:
    printf("Invalid result");
    break;
return 0;


    }
    
}
