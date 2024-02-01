#include<stdio.h>

int main()
{
    float sale, pay = 200;
    printf("Enter the sales: $");
    scanf("%f", &sale);

    if(sale < 5000){
        pay = pay + ((sale*9)/100);
    }
    else{
        pay = pay + ((sale*15)/100);
    }
    printf("The earning is: $%.2f", pay);

    return 0;
}
