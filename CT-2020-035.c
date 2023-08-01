#include <stdio.h>

int main()
{
    int decimal_Num;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_Num);

    int binary_Num[32];
    int i = 0;
    int tempDecimal_Num = decimal_Num;
    while (tempDecimal_Num > 0)
    {
        binary_Num[i] = tempDecimal_Num % 2;
        tempDecimal_Num = tempDecimal_Num / 2;
        i++;
    }
    printf("\n++++++++++++++++++++++++++++++++++");
    printf("\n\nBinary number is: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary_Num[j]);
    }
    printf("\n");

    int octal_Num[100];
    i = 0;
    tempDecimal_Num = decimal_Num;
    while (tempDecimal_Num != 0)
    {
        octal_Num[i] = tempDecimal_Num % 8;
        tempDecimal_Num = tempDecimal_Num / 8;
        i++;
    }
    printf("\n++++++++++++++++++++++++++++++++++");
    printf("\n\nOctal number is: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal_Num[j]);
    }
    printf("\n");


    char hexadecimal_Num[100];
    i = 0;
    tempDecimal_Num = decimal_Num;
    while (tempDecimal_Num != 0)
    {
        int temp = tempDecimal_Num % 16;

        if (temp < 10)
            hexadecimal_Num[i] = temp + 48;
        else
            hexadecimal_Num[i] = temp + 55;

        tempDecimal_Num = tempDecimal_Num / 16;
        i++;
    }
    printf("\n++++++++++++++++++++++++++++++++++");
    printf("\n\nHexadecimal number is: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hexadecimal_Num[j]);
    }
    printf("\n++++++++++++++++++++++++++++++++++\n");
    printf("\n                       Yasi...");
    printf("\n");

    return 0;
}
