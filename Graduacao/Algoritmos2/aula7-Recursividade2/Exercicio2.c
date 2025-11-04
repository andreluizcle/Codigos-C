#include <stdio.h>

int somaPares(int vet[], int n){
    if(n == 0){
        return 0;
    }
    
    if (vet[n-1] % 2 == 0) {
        return vet[n-1] + somaPares(vet, n - 1);
    } else {
        return somaPares(vet, n - 1);
    }
}

int main()
{
    int vet[5];
    for(int i=0;i<5;i++){
        printf("Digito %d:", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Soma dos Pares: %d", somaPares(vet, sizeof(vet)/4));

    return 0;
}
