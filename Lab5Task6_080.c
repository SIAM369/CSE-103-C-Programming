#include <stdio.h>
int main()
{
    char str[100];
    int i, a=0, n=0, c=0;
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'||
           str[i]=='u' || str[i]=='A' || str[i]=='E' ||
           str[i]=='I' || str[i]=='O' || str[i]=='U'){
            a++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            c++;
    }

    printf("Total vowels: %d\n", a);
    printf("Total consonants: %d\n", c);
    return 0;
}
