#include <stdio.h>
#include <conio.h>


void main()
{
    //get two numbers
    int num1,num2;
    char op;
    printf("Enter the number1 :");
    scanf("%d",&num1);
    printf("Enter the number2 :");
    scanf(" %d",&num2);

    //get operator
   printf("Enter the operator :");
    scanf("\n %c",&op);


    if(op=='+')
    {
        printf("Sum of the numbers is %d",num1+num2);
    }
    else if(op=='-')
    {
        printf("difference of your numbers is %d",num1-num2);
    }
    else if (op=='*')
    {
        printf("Multiple value of numbers is %d",num1*num2);
    }
    else if(op=='/')
    {
        printf("Division value of numbers is %d",num1/num2);
    }
    else
    {
        printf("INPUT ERROR");
    }
}
