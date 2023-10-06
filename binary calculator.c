#include <stdio.h>

void decimal_to_binary(int decimal) {
    if (decimal == 0) {
        printf("Binary representation: 0\n");
        return;
    }

    int binary[32]; // Assuming 32-bit integers
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal_number;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_number);

    decimal_to_binary(decimal_number);

    return 0;
}
