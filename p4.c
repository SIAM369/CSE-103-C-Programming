#include<stdio.h>
int main()
{
    int a[10], i, sum=0, max = -99999, min = 100000;
    printf("Enter the 10 integers: ");
    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<10; i++){
        sum += a[i];
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }
    printf("Sum: %d\n", sum);
    printf("Avg: %d\n", sum/10);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}

