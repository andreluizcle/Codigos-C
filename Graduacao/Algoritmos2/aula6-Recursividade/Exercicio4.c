#include <stdio.h>

int potencia(int base, int expoente){
    if(expoente == 0) return 1;         
    if(expoente == 1) return base;      
    return base * potencia(base, expoente - 1);
}


int main()
{
    int n, m;
    printf("Digite um Valor e o expoente: ");
    scanf("%d %d", &n, &m);
    printf("potencia: %d", potencia(n,m));

    return 0;
}
