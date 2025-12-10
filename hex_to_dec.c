// Hexa decimal to decimal number converter

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char hex[32];
    int len;
    int hexadec = 0;
    int digit = 0;

    printf("Enter your hexa-decimal number: ");

    scanf("%32s",hex);

    len = strlen(hex);

    for(int i = 0; i < len; i++){
        switch(hex[i]){
            case 'A': digit = 10; break;
            case 'B': digit = 11; break;
            case 'C': digit = 12; break;
            case 'D': digit = 13; break;
            case 'E': digit = 14; break;
            case 'F': digit = 15; break;
            default: digit = hex[i] - '0';
        }

        hexadec += digit * pow(16, len - 1 - i);
    }

    printf("Decimal value: %d\n", hexadec);

    return 0;
}