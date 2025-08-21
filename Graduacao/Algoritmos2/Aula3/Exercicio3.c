#include <stdio.h>

float CelsiusParaFaren(float celsius){
    return (celsius*9/5)+32;
}

float FarenParaCelsius(float faren){
    return (faren-32)*5/9;
}

void ExibirMenu(){
    printf("\n\nEscolha uma opção.\n");
    printf("1-Celsius para Farenheit\n");
    printf("2-Farenheit para Celsius\n");
    printf("3-Sair\n");
}

int main()
{
    int op; 
    float temperatura;
    while(op != 3){
        ExibirMenu();
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                printf("A temperatura em Farenheit é: %f", CelsiusParaFaren(temperatura));
                break;
            case 2:
                printf("Digite a temperatura em Farenheit: ");
                scanf("%f", &temperatura);
                printf("A temperatura em Celsius é: %f", FarenParaCelsius(temperatura));
                break;
        }
    }

    return 0;
}
