#include<stdio.h>
int main()
{
    int m, n, sum = 0, i, j, a, b, c, h = -10;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);
    for(i=1; i<=m; i++){
        printf("Enter the marks for student %d: ", i);
        scanf("%d %d %d", &a, &b, &c);
        sum = a + b + c;
        printf("Total marks for student %d: %d\n", i , sum);
        if(sum > h){
            h = sum;
        }
    }
    printf("Highest total marks: %d", h);
    return 0;
}

