#include <stdio.h>
#include <stdbool.h>

int main() {
    int num[2], somaPares = 0, multImpares = 1;

    // X == num[0]  e Y == num[1]

    printf("\n");

    // Armazena os valores de X e Y
    for (int i = 0; i < 2 ; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf(" %d", &num[i]);
    }
    
    if (num[0] >= num[1]) {
            printf("\nO valor X deve sempre ser menor que o valor Y!");
            return 0; // Encerra o programa
        }

    for (int j = num[0]; j <= num[1]; j++) {
        if (j % 2 == 0) {
            somaPares += j;
        }

        else {
            multImpares *= j;
        }
    }

    printf("\nO somatorio eh: %d", somaPares);
    printf("\nO produtorio eh: %d", multImpares);
    
    return 0;
}