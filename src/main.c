#include <stdio.h>

int main() {

    int numero;
    int soma = 0;

     printf("Digite um número inteiro: ");
     scanf("%d", &numero);

    while (numero != 0) {

        soma += numero;

        printf("Digite outro número inteiro: ");
        scanf("%d", &numero);
    }

    printf("\nSoma final: %d\n", soma);

    return 0;
}
