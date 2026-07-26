#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    int choice;
    printf("Enter your choice :\n1.Addition\n2.Sssssubraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Addition = %d",a+b);break;
        case 2:printf("Subtraction = %d",a-b);break;
        case 3:printf("Multiplication = %d",a*b);break;
        case4:printf("Division = %d",a/b);break;
        default:printf("Invalid choice");break;
    }
            return 0;
}