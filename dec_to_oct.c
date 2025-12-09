// Decimal to octal converter

#include <stdio.h>

int main(){
    int num, i = 0;
    int bin[32];

    printf("Enter a decimal number\n");
    scanf("%d",&num);

    while(num > 0){
        bin[i] = num % 8;
        num = num / 8;
        i++;
    }

    printf("Octal: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d", bin[j]);
    }
    printf("\n");
    return 0;
}