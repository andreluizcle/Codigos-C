#include <stdio.h>

long int calcular_fatorial(int num){
    if(num < 0) return 0;
    long int fatorial = 1;
    while(num>1){   
        fatorial *= num--;
    }
    return fatorial;
}

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("O fatorial é: %ld", calcular_fatorial(num));

    return 0;
}
