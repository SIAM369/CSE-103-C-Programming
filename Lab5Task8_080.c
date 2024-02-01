#include <stdio.h>
int main()
{
    char str[100], str1[100];
    int i, n=1, s;
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    printf("Input the position to start extraction: ");
    scanf("%d", &n);
    printf("Input the length of substring: ");
    scanf("%d", &s);
    for(i=n; i<n+s; i++){
        str1[i-n] = str[i];
    }
    str1[i-n] = '\0';
    printf("The extracted substring is: %s\n", str1);
    return 0;
}



