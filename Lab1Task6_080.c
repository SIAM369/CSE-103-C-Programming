#include<stdio.h>
int main()
{
    float c, f;
    printf("Insert the Centigrade: ");
    scanf("%f", &c);
    f = ((c * 9) / 5) + 32;
    printf("The Fahrenheit is: %.2f\n", f);
    return 0;
}
