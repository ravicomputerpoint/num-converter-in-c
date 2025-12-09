// Decimal to binary, octal and hexa-decimal converter

#include <stdio.h>

int main(){
    int num, i = 0;
    int bin[32];
    char hexaDigits[] = "0123456789ABCDEF";
    int choice;

    printf("What do you want: \n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Decimal to Hexa-Decimal\n");
    
    scanf("%d",&choice);

    if(choice == 1 || choice == 2 || choice == 3){
        printf("Enter your decimal number\n");
        scanf("%d",&num);
        if(choice == 1){
            while(num > 0){
                bin[i] = num % 2;
                num = num / 2;
                i++;
            }
            printf("Binary: ");
        }else if(choice == 2){
            while(num > 0){
                bin[i] = num % 8;
                num = num / 8;
                i++;
            }
            printf("Octal: ");
        }else if(choice == 3){
            while(num > 0){
                bin[i] = num % 16;
                num = num / 16;
                i++;
            }
            printf("Hexa Decimal: ");
        }

        for(int j = i - 1; j >= 0; j--){
            printf("%c",hexaDigits[bin[j]]);
        }
        printf("\n");
    }

    return 0;
}