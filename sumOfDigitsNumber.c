#include <stdio.h>
#include <conio.h>

void main()
{
    int n,sum=0,num;
    printf("Enter the number :");
    scanf("%d",&num);

    while (num/10!=0)
    {
        n=num%10;
        sum=sum+n;
        num=num/10;
    }
    sum=sum+(num);
    printf("Sum of your digits number = %d",sum);
}