#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    float media;
    int faltas;
} aluno;

void carregarAluno(aluno *aluno){
    printf("\nDigite o nome do aluno: ");
    scanf("%s", aluno->nome);
    printf("Digite a media do aluno: ");
    scanf("%f", &aluno->media);
    printf("Digite as faltas do aluno: ");
    scanf("%d", &aluno->faltas);
}

void imprimirAluno(aluno aluno){
    printf("\nNome: %s", aluno.nome);
    printf("\nMédia: %.2f", aluno.media);
    printf("\nFaltas: %d", aluno.faltas);
}

int main(){
    int tam;
    aluno *vetAluno;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &tam);

    vetAluno = (aluno*) malloc(tam * sizeof(aluno));

    for(int i = 0; i < tam; i++){
        printf("\n--------- Digitar Infos. Aluno %d --------\n", i+1);
        carregarAluno(&vetAluno[i]);
    }

    for(int i = 0; i < tam; i++){
        printf("\n--------- Aluno %d --------", i+1);
        imprimirAluno(vetAluno[i]);
        printf("\n");
    }

    free(vetAluno);
    return 0;
}
