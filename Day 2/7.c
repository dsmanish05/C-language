#include<stdio.h>
int main()
{
    int age;
    float salary;
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your salary :");
    scanf("%f",&salary);
    printf("Your age is : %d",age);
    printf("\tYour salary is : %.2f",salary);
    return 0;

}