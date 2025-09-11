#include <stdio.h>

int main()
{
    FILE *fp = fopen("estudantes.txt", "r+");
    char nome[50];
    int idade;
    float nota;
    
    if(fp == NULL){
        printf("Erro ao abrir arquvio");
        return 0;
    }
    
    for(int i = 1;i<=5;i++){
        printf("\nDigite o Nome: ");
        scanf("%s", nome);
        printf("Digite a Idade: ");
        scanf("%d", &idade);
        printf("Digite a Nota: ");
        scanf("%f", &nota);
        fprintf(fp, "Nome: %s, Idade: %d, Nota: %.2f\n", nome, idade, nota);
    }
    
    fclose(fp);
    return 0;
}
