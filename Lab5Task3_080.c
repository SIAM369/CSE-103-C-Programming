#include <stdio.h>
int main()
{
    char str[30];
    int i, word = 1;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    printf("Reverse: ");
    for(i = len-1; i>=0; i--){
        printf("%c", str[i]);
    }
    return 0;
}



