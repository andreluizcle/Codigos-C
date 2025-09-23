#include <stdio.h>

int somatoriaNatural(int n){
    if(n == 1) return 1;
    return n+somatoriaNatural(n-1);
}

int main()
{
    int n;
    printf("Digite um numero natural: ");
    scanf("%d", &n);
    printf("Somatoria: %d", somatoriaNatural(n));
    return 0;
}
