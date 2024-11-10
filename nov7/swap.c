#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter first number: ");
    scanf("%f", a);
    printf("Enter second number: ");
    scanf("%f", b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping, first number = %.2f\n", a);
    printf("After swapping, second number = %.2f", b);
    return 0;
}