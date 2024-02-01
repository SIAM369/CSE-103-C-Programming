#include<stdio.h>

int main()
{
    double cm, m, km;
    printf("Insert the centimeter: ");
    scanf("%lf", &cm);

    printf("Meter is: %.2lf\n", cm / 100);
    printf("Kilometer is: %.2lf\n", (cm / 100) / 1000);

    return 0;
}
