#include <stdio.h>
int main()
{
    //Arthmetic operators
    int a = 10;
    int b = 20;
    printf("%d \n", a+b);
    printf("%d \n", a-b);
    printf("%d \n", a*b);
    printf("%d \n", a/b);
    printf("%d \n", a%b);
    printf("%d \n", a++);
    printf("%d \n", a--);
    printf("%d \n", ++b);
    printf("%d \n \n", --b);

//Relational operators
    printf("%d \n", a>b);
    printf("%d \n", a<b);
    printf("%d \n", a>=b);
    printf("%d \n", a<=b);
    printf("%d \n", a==b);
    printf("%d \n \n", a!=b);
   

   //Logical operators
   printf("%d \n", a&&b);
    printf("%d \n", a||b);
    printf("%d \t %d \t %d \n", !a,!b ,!(a&&b));

    //Miscellaneous Operators
    printf("%d \n " ,sizeof(a));

    printf("%d %d \n",&a,&b);

    int max;
    max = (a>b)?a : b;
    printf("%d \n",max);
    return 0;
}