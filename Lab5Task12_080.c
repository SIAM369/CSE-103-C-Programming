#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, freq = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            freq++;
        }
    }
    printf("The frequency of '%c' in the string is %d.", ch, freq);

    return 0;
}
