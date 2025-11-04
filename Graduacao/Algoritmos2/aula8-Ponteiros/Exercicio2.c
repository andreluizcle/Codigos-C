#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam, *lista, escolha;
   
    printf("Digite o tamanho da lista: ");
    scanf("%d", &tam);
    lista = (int*) malloc(tam*sizeof(int));
    for(int i = 0; i < tam; i++){
        printf("\nDigite n%d:", i+1);
        scanf("%d", &lista[i]);
    }
    printf("\nDeseja mudar o tamanho da lista? Use 1 para sim e 0 para nao");
    scanf("%d", &escolha);
    switch(escolha){
        case 1:
            printf("Digite o tamanho da lista: ");
            scanf("%d", &tam);
            realloc(lista, tam*sizeof(int));
            for(int i = 0; i < tam; i++){
                printf("Digite n%d:", i+1);
                scanf("%d", &lista[i]);
            } 
        case 0:
            for(int i = 0; i < tam; i++){
                printf("%d ", lista[i]);
            } 
    }
    free(lista);
 
    return 0;
}
