#include<stdio.h>

int main()
{
    double a;
    printf("Insert a double number: ");
    scanf("%lf", &a);

    double root = sqrt(a);
    printf("Square root is: %.2f\n", root);

    return 0;
}
