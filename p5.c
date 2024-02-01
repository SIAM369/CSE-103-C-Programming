#include<stdio.h>

int main()
{
    int a[10] = {0}, i, sum = 0, max = -99999, min = 100000;
    float avg;

    printf("Enter integers (enter -1 to stop): \n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] == -1){
            break;
        }
        sum += a[i];
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }
    avg = (float)sum / i;
    printf("Sum: %d\n", sum);
    printf("Avg: %.2f\n", avg);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}

