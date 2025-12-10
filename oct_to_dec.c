// Octal to decimal number converter

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char oct[33];
    int len;
    int octal = 0;

    printf("Enter octal number: ");
    scanf("%32s",oct);

    len = strlen(oct);

    for(int i=0; i < len; i++){
        if(oct[i] < '0' || oct[i] > '7'){
            printf("Enter a valid octal number only 0 to 7\n");
            return 1;
        }

        int digit = oct[i] - '0';

        octal += digit * pow(8, len - 1 - i);

    }

    printf("Decimal value: %d\n", octal);
    return 0;
}