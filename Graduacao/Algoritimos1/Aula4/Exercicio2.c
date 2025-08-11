#include <stdio.h>
#include <math.h>

int main()
{
    float kg, altura, imc;
    printf("Digite a Altura: ");
    scanf("%f", &altura);
    printf("Digite o peso: ");
    scanf("%f", &kg);

    imc = kg / (pow(altura, 2));

    if(imc < 18.5){
        printf("Classificação Magreza");
    } else if(imc < 24.9){
        printf("Classificação normal");
    } else if(imc < 29.9){
        printf("Classificação sobrepeso");
    } else if(imc <= 39.9){
        printf("Classificação obesidade");
    } else{
        printf("Obesidade grave");
    }

    return 0;
}
