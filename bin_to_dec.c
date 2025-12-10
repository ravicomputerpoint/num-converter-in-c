// Binary to decimal converter

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char bin[33];
    int decimal = 0;
    int len;
    printf("Enter a binary number: ");
    scanf("%32s",bin);

    len = strlen(bin);

    for(int i = 0; i < len; i++){
        if(bin[i] == '1'){
            decimal += pow(2, len - 1 - i);
        }else if(bin[i] != '0'){
            printf("Invalid input! Only 0 and 1 are allowed. \n");
            return 1;
        }
    }

    printf("Decimal value: %d\n",decimal);

    return 0;
}