#include<stdio.h>

int main()
{
    int a, b;
    printf("Insert the number and the power: ");
    scanf("%d %d", &a, &b);
    int power = pow(4, 2);
    printf("Power of the number is: %d\n", power);

    return 0;
}

