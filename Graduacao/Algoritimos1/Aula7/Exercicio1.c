#include <stdio.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} data;

typedef struct {
    char nome[20];
    int idade;
    data nascimento;
} pessoa;

int main()
{
    int indiceMaiorIdade, maiorIdade, indiceMenorLexico = 0;
    int menorLexico;
    pessoa pessoas[5];

    // Recebe e Procura Maior Idade e Menor Lexicográfica
    for(int i = 0; i < 5; i++){
        printf("Digite, respectivamente, Nome, Idade, data de nascimento(dd/mm/aa):\n");
        scanf("%s %d %d/%d/%d", pessoas[i].nome, &pessoas[i].idade,
              &pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);

        if(pessoas[i].idade > maiorIdade){
            maiorIdade = pessoas[i].idade;
            indiceMaiorIdade = i;
        }

        if(i == 0)
            menorLexico = strcmp("A", pessoas[i].nome);

        if(strncmp("A", pessoas[i].nome, menorLexico) < 0){
            menorLexico = strncmp("A", pessoas[i].nome, menorLexico);
            indiceMenorLexico = i;
        }
    }

    getchar();

    // Imprimir Todos
    for(int i = 0; i < 5; i++){
        printf("\nPessoa %d", i+1);
        printf("\nNome: %s", pessoas[i].nome);
        printf("\nIdade: %d", pessoas[i].idade);
        printf("\nNascimento: %d/%d/%d\n", pessoas[i].nascimento.dia, pessoas[i].nascimento.mes, pessoas[i].nascimento.ano);
    }

    // Imprimir Buscas
    printf("\nPessoa de Menor Ordem Lexicografica:");
    printf("\nNome: %s", pessoas[indiceMenorLexico].nome);
    printf("\nIdade: %d", pessoas[indiceMenorLexico].idade);
    printf("\nNascimento: %d/%d/%d\n", pessoas[indiceMenorLexico].nascimento.dia, pessoas[indiceMenorLexico].nascimento.mes, pessoas[indiceMenorLexico].nascimento.ano);

    printf("\nPessoa de Maior Idade:");
    printf("\nNome: %s", pessoas[indiceMaiorIdade].nome);
    printf("\nIdade: %d", pessoas[indiceMaiorIdade].idade);
    printf("\nNascimento: %d/%d/%d\n", pessoas[indiceMaiorIdade].nascimento.dia, pessoas[indiceMaiorIdade].nascimento.mes, pessoas[indiceMaiorIdade].nascimento.ano);

    return 0;
}
