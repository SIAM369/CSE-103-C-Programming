#include <stdio.h>

int main() {
    int n;
    float total = 0.0;

    printf("Enter number of products: ");
    scanf("%d", &n);

    float price[n], quantity[n], product_total[n];

    for (int i = 0; i < n; i++) {
        printf("Enter price and quantity of product %d: ", i+1);
        scanf("%f %f", &price[i], &quantity[i]);
        product_total[i] = price[i] * quantity[i];
        total += product_total[i];
    }

    printf("\nMoney Receipt\n----------------\n");
    for (int i = 0; i < n; i++) {
        printf("Product %d: %.1f\n", i+1, product_total[i]);
    }
    printf("----------------\nTotal: %.1f\n", total);

    return 0;
}

