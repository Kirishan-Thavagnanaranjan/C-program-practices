#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int num,count=0,copy,n,sum=0;
    printf("Enter the number :");
    scanf ("%d",&num);
    copy=num;
    while (copy>0)
    {
        copy=copy/10;
        count++;
    }
    copy=num;
    while (copy>0)
     {
        sum =sum +pow((copy%10),count);
        copy=copy/10;
     }

    if (sum == num)
        {
            printf("Your number is Armstrong number");
        }
    else
    {
        printf("Your number is not Armstrong number");
    }
}
