#include<stdio.h>

int main()
{
    int a=15, b=10;

    int sum = a+b;
    int difference = a-b;
    int product = a*b;
    int quotient = a/b;
    int remainder = a%b;

    printf("Sum is: %d\n", sum);
    printf("Difference is: %d\n", difference);
    printf("Product is: %d\n", product);
    printf("Quotient is: %d\n", quotient);
    printf("Reminder is: %d\n", remainder);

    return 0;
}
