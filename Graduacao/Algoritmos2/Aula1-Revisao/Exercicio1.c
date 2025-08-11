#include <stdio.h>

int main()
{
    float n1, n2, n3, maior, menor;
    printf("Digite o Valor de 3 Produtos: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    maior = n1;
    menor = n1;
    
    if(n2 > maior)
        maior = n2;
    if(n3 > maior)
        maior = n3;
    if(n2 < menor)
        menor = n2;
    if(n3 < menor)
        menor = n3;
        
    printf("Maior preco: %.2f\nMenor preco: %.2f", maior, menor);
    return 0;
}
