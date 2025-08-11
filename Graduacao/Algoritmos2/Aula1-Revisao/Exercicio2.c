#include <stdio.h>

int main()
{
    int anos;
    float valorInvestido, taxa, inicial;
    printf("Quantos anos serão investidos: ");
    scanf("%d", &anos);
    printf("Qual será o valor: ");
    scanf("%f", &valorInvestido);
    printf("qual a porcentagem ao ano: ");
    scanf("%f", &taxa);
    inicial = valorInvestido;
    for(int i = 1; i<=anos; i++){
        valorInvestido += (valorInvestido*(taxa/100));
    }
    printf("Montante Final: %.2f", valorInvestido);
    printf("\nJuros: %.2f", valorInvestido-inicial);
    return 0;
}
