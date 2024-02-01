#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], word[]="the";
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == 'T' || str[i] == 't'){
            if(strncmp(&str[i], word, 3) == 0){
                count++;
            }
        }
    }
    printf("The word 'the' appears %d times in the string.", count);

    return 0;
}
