#include <stdio.h>
int main()
{
    char str[30];
    int i, word = 1;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    printf("Number of words: ");
    for(i=1; str[i] != '\0'; i++){
        if(str[i] == ' '){
            word++;
        }
    }
    printf("%d", word);
    return 0;
}


