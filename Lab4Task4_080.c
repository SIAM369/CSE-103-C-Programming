#include <stdio.h>
int main() {
    int n;
    int total = 0;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    int marks[n];

    for (int i = 0; i < n; i++) {
        printf("Enter marks for Subject %d: ", i+1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    printf("\nReport Card\n-------------\n");
    for (int i = 0; i < n; i++) {
        printf("Subject %d: %d\n", i+1, marks[i]);
    }
    printf("-------------\nTotal: %d\n", total);

    return 0;
}

