#include <stdio.h>

int main() {
    int rows, i, j, k;
    printf("Input number of rows (half of the diamond): ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = rows - 1; i >= 1; i--) {
        for (j = rows; j > i; j--) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

    */
