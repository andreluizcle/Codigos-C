#include <stdio.h>

int main()
{
    int qtd = 0, soma = 0, controle;
    printf("Digite os numeros que deseja somar (0 para finalizar):\n");
    while(controle != 0){
        scanf("%d", &controle);
        soma += controle;
        qtd++;
    }
    printf("Soma: %d \nNumeros lidos: %d", soma, qtd - 1);

    return 0;
}
