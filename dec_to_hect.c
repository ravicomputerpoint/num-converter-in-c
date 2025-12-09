// Decimal to hexa-decimal converter

#include <stdio.h>

int main()
{
    int num, i = 0;
    int bin [32];
    char hexDigits[] = "0123456789ABCDEF";

    printf("Enter a decimal number\n");
    scanf("%d", &num);

    while(num > 0){
        bin[i] = num % 16;
        num = num / 16;
        i++;
    }

    printf("Hexa Decimal :");
    for(int j = i - 1; j >= 0; j--){
        // switch(bin[j]){
        //     case 10: printf("%c",'A'); break;
        //     case 11: printf("%c",'B'); break;
        //     case 12: printf("%c",'C'); break;
        //     case 13: printf("%c",'D'); break;
        //     case 14: printf("%c",'E'); break;
        //     case 15: printf("%c",'F'); break;
        //     default: printf("%d", bin[j]);
        // }
        printf("%c",hexDigits[bin[j]]);
    }
    printf("\n");
    return 0;
}