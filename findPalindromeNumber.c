#include <stdio.h>
#include <conio.h>

void main()
{
    int num,copy,rev=0;
    printf("Enter your number:");
    scanf("%d",&num);

    copy=num;

    while (copy>0)
    {
        rev=rev*10;
        rev=rev+(copy%10);
        copy=copy/10;
    }
    if(rev==num)
    {
        printf("This is palindrome number");
    }
    else
    {
        printf("This is not palindrome number");
    }

}
