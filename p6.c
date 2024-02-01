
#include<stdio.h>
int main()
{
    int m, n, i, j;
    printf("Enter the m and n: ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }


    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
