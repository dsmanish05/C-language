#include<stdio.h>
int main()
{
    int i,n=100;
    printf("Even numbers from 1 to 100 are :\n");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }       
return 0;
}