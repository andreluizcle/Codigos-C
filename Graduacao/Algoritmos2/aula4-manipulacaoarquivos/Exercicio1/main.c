#include <stdio.h>

int main()
{
    FILE* arq;
    arq = fopen("notas.txt", "r");
    char RA[6];
    float nota;
    
    if(arq == NULL){
        printf("Arquivo não existe");
        return 0;
    }
    
    while(fscanf(arq, "%s %f", RA, &nota) != EOF){
        printf("RA: %s Nota: %.2f\n", RA, nota);
    }
    
    fclose(arq);
    return 0;
}
