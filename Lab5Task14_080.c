#include <stdio.h>

int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, i, fact;
    float sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = factorial(i);
        sum += (float)fact / i;
    }

    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}
