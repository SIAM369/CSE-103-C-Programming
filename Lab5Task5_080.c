#include <stdio.h>
int main()
{
    char str[100];
    int i, a=0, n=0, c=0;
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i]!='\0'; i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            a++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            n++;
        }
        else
            c++;
    }

    printf("Total Alphabets: %d\n", a);
    printf("Total Digits: %d\n", n);
    printf("Total Special Characters: %d\n", c);
    return 0;
}
