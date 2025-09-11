#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[50];
    FILE *fp = fopen("caracterer.txt", "w+");
    
    if(fp==NULL){
        printf("Erro ao abrir arquivo");
        return 0;
    }
    
    printf("Escreva uma palavra: ");
    scanf("%s", palavra);
    
    for(int i = 0; i<strlen(palavra); i++){
        fputc(palavra[i], fp);
        fputc('\n', fp);
    }

    fclose(fp);
    return 0;
}
