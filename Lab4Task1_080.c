#include<stdio.h>

int main()
{
    int i, n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int squares[n];

    for(i=0; i<n; i++){
        squares[i] = i*i;
    }

    for(i=0; i<n; i++){
        printf("%d ", squares[i]);
    }
    return 0;
}
