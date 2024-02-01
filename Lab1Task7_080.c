#include<stdio.h>
int main()
{
    float r, d, c, a, pi = 3.14159;
    printf("Insert the radius: ");
    scanf("%f", &r);
    printf("The diameter is: %.2f\n", 2 * r);
    printf("The circumference is: %.2f\n", 2 * pi * r);
    printf("The area is: %.2f\n", pi * r * r);
    return 0;
}
