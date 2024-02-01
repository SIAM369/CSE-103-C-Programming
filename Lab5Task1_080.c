#include <stdio.h>
int main()
{
    char str[30];
    int i, len = 0;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    for(i=0; str[i] != '\0'; i++){
        len++;
    }
    printf("Length of the string: %d", len);
    return 0;
}
