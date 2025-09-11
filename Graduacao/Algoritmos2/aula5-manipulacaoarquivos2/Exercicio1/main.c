#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("atletas.txt", "r"); // Abrir o arquivo para leitura
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    char nome[100], esporte[50], nomeMaisVelho[50], nomeMaisMedalhas[50];
    int idade, medalhas, maisMedalhas, maiorIdade = 0;

    while (fscanf(fp, "%s %s %d %d", nome, esporte, &idade, &medalhas) != EOF) {
        printf("Nome: %s, Esporte: %s, Idade: %d, Medalhas: %d\n", nome, esporte, idade, medalhas);
        if(maiorIdade<idade){
            maiorIdade = idade;
            strcpy(nomeMaisVelho, nome);
        }
        if(maisMedalhas<medalhas){
            maisMedalhas = medalhas;
            strcpy(nomeMaisMedalhas, nome);
        }
    }
    
    printf("\n\nMais Velho: %s, idade: %d", nomeMaisVelho, maiorIdade);
    printf("\nMais medalhas: %s, Medalhas: %d", nomeMaisMedalhas, maisMedalhas);

    fclose(fp);
    return 0;
}
