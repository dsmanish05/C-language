#include<stdio.h>
int main()
{
    float x = 9.32;
    int y = (int)x;

    printf("Orginal = %(2)f",x);
    printf("\nAfter casting = %d",y);
    return 0;

} 