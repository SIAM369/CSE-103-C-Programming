#include<stdio.h>
int main()
{
    int x1, x2, y1, y2;
    printf("Insert x1, x2: ");
    scanf("%d %d", &x1, &x2);
    printf("Insert y1, y2: ");
    scanf("%d %d", &y1, &y2);
    int x, y;
    x = x1 - x2;
    y = y1 - y2;
    double d = sqrt(pow(x, 2) + pow(y, 2));
    printf("The Euclidean distance is: %.6f\n", d);
    return 0;
}
