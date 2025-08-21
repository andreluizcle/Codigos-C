#include <stdio.h>

int verifica_primo(int num){
    if(num<=1) return 0;
    for(int i = 3; i<num;i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(verifica_primo(num)){
        printf("É primo");
    }else{
        printf("Não é primo");
    }

    return 0;
}
