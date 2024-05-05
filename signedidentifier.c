#include <stdio.h>

void main()
{
int num;
printf("Enter a number :");
scanf("%d",&num);
if (num>0)
{
    printf("You entered positive number");

}
else if (num==0)
{
    printf("You entered zero");
}
else
{
    printf("You entered Negative number");
}
}
