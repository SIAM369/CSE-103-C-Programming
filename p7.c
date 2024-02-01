#include<stdio.h>
int main()
{
    int m, n, i, j;
    printf("Enter the m and n: ");
    scanf("%d %d", &m, &n);

    int a[m][n];
    int b[m][n];
    int result[m][n];

    printf("Enter the 1st matrix: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Enter a[%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the 2nd matrix: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Enter b[%d][%d]: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of matrix: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            result[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nSubtraction of matrix: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
