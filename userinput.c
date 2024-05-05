#include <stdio.h>
int main()
{
    int age;
    char grade;
    char name[50];
    float weight;

    printf("Enter your name: \n");
    scanf("%s",&name);
    printf("Enter your age: \n");
    scanf("%d",&age);
    printf("Enter your grade: \n");
    scanf(" %c", &grade);
    printf("Enter your weight: \n");
    scanf("%f",&weight);

    printf("your name is %s \n", name);
    printf("Your are %d years old \n", age);
    printf("Your weight is %.2f Kg \n" ,weight);
    printf("Your grade is %c \n",grade);
    return 0;

}