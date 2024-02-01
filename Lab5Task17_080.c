#include <stdio.h>
void checkAnagram(char str1[], char str2[])
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int flag = 0;
    if (len1 != len2){
        printf("The two strings are not anagrams.\n");
        return;
    }
    for (int i = 0; i < len1; i++){
        int j;
        for (j = 0; j < len2; j++){
            if (str1[i] == str2[j]){
                break;
            }
        }
        if (j == len2){
            flag = 1;
            break;
        }
    }

    if (flag == 1){
        printf("The two strings are not anagrams.\n");
    }
    else{
        printf("The two strings are anagrams.\n");
    }
}
int main()
{
    char str1[100], str2[100];
    printf("Enter string 1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter string 2: ");
    fgets(str2, sizeof(str2), stdin);
    checkAnagram(str1, str2);
    return 0;
}
