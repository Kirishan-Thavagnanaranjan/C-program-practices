#include <stdio.h>
#define PI 3.14 //This is preprocessor constant

int main()
{
    float radius,area,circumference ;
    radius = 14.00;
    area = PI*radius*radius;
    circumference = 2*PI*radius;
    printf("Area of the circle is: %f \n",area);
    printf("circumference of theh circle is : %f \n", circumference);
    return 0;    


}