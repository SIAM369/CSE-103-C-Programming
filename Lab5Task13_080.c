#include <stdio.h>

int main()
{
    char str[100], str2[100], result[200];
    int i, j;

    printf("Enter the first string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str[i] != '\0'; i++){
        result[i] = str[i];
    }

    for(j = 0; str2[j] != '\0'; j++){
        result[i+j] = str2[j];
    }
    result[i+j] = '\0';
    printf("The combined string is: %s", result);

    return 0;
}
