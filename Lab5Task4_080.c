#include <stdio.h>
int main()
{
    char str1[30], str2[30];
    int i, flag = 0;
    printf("Input the 1st string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Input the 2nd string: ");
    fgets(str2, sizeof(str2), stdin);
    printf("String1: %s", str1);
    printf("String2: %s", str2);

    i = 0;
    while (str1[i] != '\0')
    {
       if (str1[i] != str2[i])
       {
          flag = 1;
          break;
       }
       i++;
    }

    if (flag == 0 && str2[i] == '\0')
       printf("The strings are equal.\n");
    else
       printf("The strings are not equal.\n");
    return 0;
}



