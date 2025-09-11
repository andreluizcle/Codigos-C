#include <stdio.h>

void ExibirNotas(char arquivo[50]){
    FILE* arq;
    arq = fopen(arquivo, "r");
    char RA[6];
    float nota;
    
    if(arq == NULL){
        printf("Arquivo não existe");
        return;
    }
    
    while(fscanf(arq, "%s %f", RA, &nota) != EOF){
        printf("RA: %s Nota: %.2f\n", RA, nota);
    }
    
    fclose(arq);
}

float CalcularMediaTurma(char arquivo[50]){
    FILE* arq = fopen(arquivo, "r");
    int RA, contador = 0;
    float soma, nota;
    while (fscanf(arq, "%d %f",&RA, &nota) != EOF) {
        soma += nota;
        contador++;
    }
    fclose(arq);
    return (soma/contador);
}

float PesquisarNota(char arquivo[50], int RA){
    FILE* arq = fopen(arquivo, "r");
    int RAaux;     
    float nota;

    if (arq == NULL) {
        return 0;
    }

    while (fscanf(arq, "%d %f", &RAaux, &nota) != EOF) {
        if (RA == RAaux) {
            fclose(arq);
            return nota;
        }
    }
}

void ExibirMenu(){
    printf("\n\nEscolha dentre as Opções:\n");
    printf("1-Exibir Notas\n");
    printf("2-Calcular Média da Turma\n");
    printf("3-Pesquisar nota por RA\n");
    printf("4-Sair do Programa\n");
    printf("Opção: ");
}

int main()
{
    int op = 0;
    while(op != 4){
        ExibirMenu();
        scanf("%d", &op);
        
        switch(op){
            case 1:
                ExibirNotas("notas.txt");
                break;
            case 2:
                float media = CalcularMediaTurma("notas.txt");
                printf("Média da Turma: %.2f", media);
                break;
            case 3:
                int RA;
                float nota;
                printf("\nDigite o RA: ");
                scanf("%d", &RA);
                nota = PesquisarNota("notas.txt", RA);
                printf("RA: %d Nota: %.2f", RA, nota);
                break;
            case 4:
                printf("Você Selecionou Sair do Sistema\n");
                printf("Saindo..");
                break;
        }
    }

    return 0;
}
