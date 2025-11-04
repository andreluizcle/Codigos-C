#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "funcoes.h"

void Cadastrar(Pessoa pessoa){
    pessoa.ativo = 1;
    FILE *arquivo = fopen("agenda.bin", "ab");
    fwrite(&pessoa, sizeof(pessoa), 1, arquivo);
    fclose(arquivo);
}

void Consultar(){
    Pessoa pessoas[10];
    FILE *arquivo = fopen("agenda.bin", "rb");
    int numLidos;
    while((numLidos = fread(pessoas, sizeof(Pessoa), 10, arquivo)) > 0){
        for(int i = 0; i<10; i++){
            if(pessoas[i].ativo == 1){
                printf("Nome: %s", pessoas[i].nome);
                printf("   Telefone: %s\n", pessoas[i].telefone);
            }
        }
    }
    fclose(arquivo);
}

void Excluir(char nome[50]){
    FILE *arquivo = fopen("agenda.bin", "r+b");
    Pessoa pessoas[10];
    int numLidos;
    while((numLidos = fread(pessoas, sizeof(Pessoa), 10, arquivo)) > 0){
        for(int i = 0; i<10; i++){
            if(strcmp(pessoas[i].nome, nome) == 0){
                pessoas[i].ativo = 0;
                long pos = ftell(arquivo) - (numLidos * sizeof(Pessoa)) + (i * sizeof(Pessoa));

                // Volta o ponteiro exatamente para o registro que queremos sobrescrever
                fseek(arquivo, pos, SEEK_SET);

                // Grava o registro alterado
                fwrite(&pessoas[i], sizeof(Pessoa), 1, arquivo);
            }
        }
    }
    fclose(arquivo);
}
