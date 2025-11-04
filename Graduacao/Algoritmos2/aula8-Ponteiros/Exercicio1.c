#include <stdio.h>
#include "math_operations.h"

int main()
{
    int (*operacao[])(int, int) = {add, sub, multi, divi};
    int a, b, op;
    printf("Escolha a operacao:\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
    scanf("%d", &op);
    printf("Digite n1: ");
    scanf("%d", &a);
    printf("Digite n2: ");
    scanf("%d", &b);
    
    printf("Resultado: %d", operacao[op-1](a,b));
    
    return 0;
}
