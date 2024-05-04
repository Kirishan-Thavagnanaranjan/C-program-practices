#include <stdio.h>
int main()
{
    printf("%s \n", "This is a area and circumference calculator..."); //this is literal constant
    float radius,area,circumference;
    const float PI=3.14; //This is a constant using const keyword
    radius = 12.0;
    area = PI*radius*radius;
    circumference = 2*PI*radius;
    printf("Area of the circle is : %f \n", area);
    printf("circumference of the circle is: %f \n",circumference);
    return 0;

}



