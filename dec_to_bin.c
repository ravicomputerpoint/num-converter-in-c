// Decimal to binary number converter

#include <stdio.h>

int main()
{
    int num, i = 0;
    int bin[32];

    printf("Enter a decimal number\n");
    scanf("%d",&num);
    while(num > 0){
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d",bin[j]);
    }
    printf("\n");
    return 0;
}