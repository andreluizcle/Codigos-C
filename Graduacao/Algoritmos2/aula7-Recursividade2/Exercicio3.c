#include <stdio.h>

void decrescente(int n){
    if(n == 1){
        printf("\n1");
        return;
    }
    
    printf("\n%d", n);
    decrescente(n-1);
}

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    decrescente(n);

    return 0;
}
