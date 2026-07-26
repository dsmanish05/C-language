#include<stdio.h>
int main()
{
    int i,n;
    int fac=1;

    printf("Enter a number :");
    scanf("%d",&n);
    printf("Factorial of %d is : ",n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("%d",fac);
    return 0;
}