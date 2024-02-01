
#include<stdio.h>
int main()
{
    int n, m=1, i;
    printf("Enter the n: ");
    scanf("%d", &n);

    for(i = 2; i<=2*n; i+=2){
        m = m * i;
    }
    printf("%d", m);
    return 0;
}

