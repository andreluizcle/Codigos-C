#include <stdio.h>

int fatorial(int num){
    if(num<=1){
        return 1;
    }
    
    return num*fatorial(num-1);
}

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Fatorial: %d", fatorial(num));
}
