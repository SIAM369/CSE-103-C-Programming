#include<stdio.h>
int main()
{
    int d, y, w;
    printf("Insert the day: ");
    scanf("%d", &d);
    printf("%d year(s) and %d day(s)\n", d / 365, d % 365);
    printf("%d week(s) and %d day(s)\n", d / 7, d % 7);
    return 0;
}
