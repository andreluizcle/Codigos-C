#include <stdio.h>
#include <string.h>

int main() {
    FILE* arq = fopen("notas.txt", "r");
    int RAaux, RA;     
    float nota;

    if (arq == NULL) {
        printf("Arquivo não Existe\n");
        return 0;
    }

    printf("Pesquisa por RA: ");
    scanf("%d", &RA);  

    while (fscanf(arq, "%d %f", &RAaux, &nota) != EOF) {
        if (RA == RAaux) {
            printf("\nRA: %d Nota: %.2f\n", RAaux, nota);
        }
    }

    fclose(arq);
    return 0;
}
