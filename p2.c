
#include<stdio.h>
int main()
{
    int n, sum=0, i;
    printf("Enter the n: ");
    scanf("%d", &n);

    for(i = 3; i<=3*n; i+=3){
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}
