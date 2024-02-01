#include <stdio.h>
int main()
{
    char str[80];
    int i;

    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    printf("The given sentence is: %s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
        else if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
    printf("After Case changed the string is:: %s", str);

    return 0;
}



