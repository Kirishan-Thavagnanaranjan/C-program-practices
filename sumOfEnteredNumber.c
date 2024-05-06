#include <stdio.h>
#include <conio.h>

void main ()
{
    int num , n ,sum=0;

    printf("Enter the number :");
    scanf("%d",&num);

    for(n=1;n<=num;n++)
    {
        sum=sum+n;
    }

    printf("Sum of the first your entered number = %d",sum);
}
