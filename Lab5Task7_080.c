#include <stdio.h>
int main()
{
    char str[100];
    int freq[255];
    int i=0, max=0, ascii;
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    for(i=0; i<255; i++){
        freq[i]=0;
    }
    for(i=0; str[i] != '\0'; i++){
        ascii = (int)str[i];
        freq[ascii]++;
    }
    for(i=0; i<255; i++){
        if(freq[i]>freq[max])
            max = i;
    }
    printf("Maximum is '%c' = %d times.", max, freq[max]);
    return 0;
}



