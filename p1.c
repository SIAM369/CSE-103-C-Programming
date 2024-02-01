#include<stdio.h>
int main()
{
    double money;
    double f, discount;
    printf("Enter the amount of money: ");
    scanf("%lf", &money);

    if(money>=1000){
        discount = money * 0.5;
        f = money - discount;
        printf("The discount is: %.2lf\n", discount);
        printf("The final amount is: %.2lf\n", f);
    }
    else if(money>500 && money <1000){
        discount = money * 0.25;
        f = money - discount;
        printf("The discount is: %.2lf\n", discount);
        printf("The final amount is: %.2lf\n", f);
    }
    else if(money <= 500){
        printf("There will be no discount.");
    }
    return 0;
}
