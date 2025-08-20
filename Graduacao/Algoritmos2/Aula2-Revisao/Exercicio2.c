#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct{
    char nome[50];
    char tipoMusica[50];
    int numIntegrandes;
    int seguidoresTwitter;
    int ouvintesSpotify;
} Banda;

int main()
{
    Banda bandas[5];
    int indiceMaisFamosa, maiorEngajamento = 0;
    char userTipoMusica[50];
    printf("Digite 5 Bandas com seus respectivos: Nomes, Tipo de Musica, Numero de Integrantes, Quantidade de Seguidores no Twitter e Numero de Ouvintes no Spotify.\n");
    for(int i=0; i<5;i++){
        printf("\nBanda %d\n", i+1);
        printf("Nome: ");
        scanf("%s", bandas[i].nome);
        printf("Tipo de Musica: ");
        scanf("%s", bandas[i].tipoMusica);
        printf("Numero de Integrantes: ");
        scanf("%d", &bandas[i].numIntegrandes);
        printf("Seguido no Twitter: ");
        scanf("%d", &bandas[i].seguidoresTwitter);
        printf("Ouvintes no Spotify: ");
        scanf("%d", &bandas[i].ouvintesSpotify);
        if((bandas[i].seguidoresTwitter + bandas[i].ouvintesSpotify) > maiorEngajamento){
            indiceMaisFamosa = i;
            maiorEngajamento = bandas[i].seguidoresTwitter + bandas[i].ouvintesSpotify;
        }
            
    }
    
    printf("\n\nQue tipo de Musica esta buscando? \n");
    scanf("%s", userTipoMusica);
    
    for(int i=0;i<5;i++){
        if(strcmp(userTipoMusica, bandas[i].tipoMusica) == 0){
            printf("\nNome: %s\n", bandas[i].nome);
            printf("Tipo de Musica: %s\n", bandas[i].tipoMusica);
            printf("Numero de Integrantes: %d\n", bandas[i].numIntegrandes);
            printf("Seguido no Twitter: %d\n", bandas[i].seguidoresTwitter);
            printf("Ouvintes no Spotify: %d\n", bandas[i].ouvintesSpotify);
        }
    }
    
    printf("\n------------Banda Mais Engajada-----------\n");
    printf("Nome: %s\n", bandas[indiceMaisFamosa].nome);
    printf("Tipo de Musica: %s\n", bandas[indiceMaisFamosa].tipoMusica);
    printf("Numero de Integrantes: %d\n", bandas[indiceMaisFamosa].numIntegrandes);
    printf("Seguido no Twitter: %d\n", bandas[indiceMaisFamosa].seguidoresTwitter);
    printf("Ouvintes no Spotify: %d\n", bandas[indiceMaisFamosa].ouvintesSpotify);
    printf("Engajamento Total: %d", maiorEngajamento);

    return 0;
}
