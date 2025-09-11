#include <stdio.h>

int main()
{
    FILE *fp = fopen("multiplicacao.txt", "w+");
    
    if(fp == NULL){
        printf("Erro ao abrir o arquivo");
        return 0;
    }
    
    for(int i = 1;i<=10;i++){
        fputc('\n', fp);
        for(int j=1;j<=10;j++){
            fprintf(fp, "%d x %d = %d\n", i, j,i*j);
        }
    }
    
    fclose(fp);
    return 0;
}
