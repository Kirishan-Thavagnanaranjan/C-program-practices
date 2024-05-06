#include <stdio.h>
#include <conio.h>

void main()
{

    int num , n=1 ,fact=1;
    printf("Enter the number :");
    scanf("%d",&num);

    while(n<=num)
    {
        fact= fact *n;
        n=n+1;
    }
    printf("Factorial of your number = %d",fact);
}
