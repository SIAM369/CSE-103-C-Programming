#include<stdio.h>
int main()
{
    float interest, principal, rate;
    int days;

    printf("Enter the principal: ");
    scanf("%f", &principal);

    printf("Enter the rate: ");
    scanf("%f", &rate);

    printf("Enter the day(s): ");
    scanf("%d", &days);

    if(principal > 0 && principal <= 10000){
        if(rate==20){
            interest = principal * (rate / 100) * ((float)days / 365.0);
        }
        else
            printf("The interest rate will be 20%");
    }
    else if(principal >= 10001 && principal <= 50000){
        if(rate==17){
            interest = principal * (rate / 100) * ((float)days / 365.0);
        }
        else
            printf("The interest rate will be 17%");
    }
    else if(principal >= 50000){
        if(rate==15){
            interest = principal * (rate / 100) * ((float)days / 365.0);
        }
        else
            printf("The interest rate will be 15%");
    }
    printf("The amount of interest is: %f", interest);
    return 0;
}
