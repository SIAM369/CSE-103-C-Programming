#include <stdio.h>
int main()
{
    char str[80], search[80];
    int count1 = 0, count2 = 0, i, j, flag;

    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    printf("Input the Sub-string: ");
    fgets(search, sizeof(search), stdin);
    while (str[count1] != '\0')
        count1++;
    while (search[count2] != '\0')
        count2++;
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (str[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("The substring exists in the string.");
    else
        printf("The substring is not exists in the string.");

    return 0;
}


