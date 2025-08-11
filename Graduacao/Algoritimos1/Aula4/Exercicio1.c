#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, r1, r2;
    printf("Digite os coeficientes separados por espacos: ");
    scanf("%f %f %f", &a, &b, &c);
    
    delta = pow(b, 2) - (4 * a * c);
    r1 = ((-1 * b) + sqrt(delta)) / (2.0 * a);
    r2 = ((-1 * b) - sqrt(delta)) / (2.0 * a);

    if(delta > 0){
        printf("A equacao tem duas raizes reais diferentes = %.2f e %.2f", r1, r2);
    }
    if(delta == 0){
        printf("A equacao tem duas raizes reais e iguais = %.2f", r2);
    }
    if(delta < 0){
        printf("A equacao nao tem raizes reais");
    }

    return 0;
}
