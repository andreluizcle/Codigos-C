#include <stdio.h>

int main()
{
    int primeiroElemento, razao, quantidadeElementos, j;

    printf("Digite o primeiro Elemento: ");
    scanf("%d", &primeiroElemento);
    printf("\nDigite a razao: ");
    scanf("%d", &razao);
    printf("\nDigite a quantidade de Elementos: ");
    scanf("%d", &quantidadeElementos);

    for(printf("\nProgresso: { %d", primeiroElemento), j = 1; j < quantidadeElementos; j++){
        primeiroElemento += razao;
        printf(" %d", primeiroElemento);
    }
    printf(" }");
    return 0;
}
