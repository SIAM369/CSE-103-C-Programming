#include<stdio.h>
int main()
{
    int num, i, s;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (i=2; i<num; i++){
        s = num % i;
        if(s == 0){
            break;
        }
        else{
            continue;
        }
    }
    if(s == 0){
        printf("The number is not a prime.");
    }
    else{
        printf("The number is a prime.");
    }
    return 0;
}
