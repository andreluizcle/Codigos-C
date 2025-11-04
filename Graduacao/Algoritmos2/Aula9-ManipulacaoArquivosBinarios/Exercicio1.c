#include <stdio.h>
#include "funcoes.h"

int main()
{
    int opcao;
    
    while(opcao != 4){
        printf("\n\nSistema de Agenda\n\n");
        printf("Escolha:\n1-Cadastrar Contato\n2-Consultar Contatos\n3-Excluir Contato\n4-Sair\n\n");
        scanf("%d", &opcao);
            
        switch(opcao){
            case 1:
                Pessoa pessoa;
                printf("Digite o nome: ");
                scanf("%s", pessoa.nome);
                printf("Digite o telefone: ");
                scanf("%s", pessoa.telefone);
                Cadastrar(pessoa);
                break;
            case 2:
                Consultar();
                break;
            case 3:
                char nome[50];
                printf("Digite o nome: ");
                scanf("%s", nome);
                Excluir(nome);
                break;
        }
    }
    
 
    return 0;
}
