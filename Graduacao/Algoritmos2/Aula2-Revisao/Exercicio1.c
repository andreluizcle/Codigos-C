#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int qtdCid=0;
    char **vetCid, maisCar[50], maisBar[50];
    float *vetVal, totVal=0, maisVal, menVal;
    
    printf("Informe quantas cidades você já visitou: ");
    scanf("%d", &qtdCid);
    printf("\n");
    
    vetCid = (char **) malloc(qtdCid * sizeof(char*)); //Alocação dinâmica de ponteiro de ponteiros (matriz)
    vetVal = (float *) malloc(qtdCid * sizeof(float));
    
    for(int i=0; i<qtdCid; i++){
        vetCid[i] = (char *) malloc(50 * sizeof(char));
        
        getchar();
        
        printf("Informe o nome da %dª cidade: ", i+1);
        scanf("%[^\n]", vetCid[i]);

        printf("Informe o gasto na %dª cidade: ", i+1);
        scanf("%f", &vetVal[i]);
        
        maisVal = i==0 ? vetVal[i] : maisVal;
        menVal = i==0 ? vetVal[i] : menVal;
        
        if(maisVal<vetVal[i]){
            maisVal = vetVal[i];
            strcpy(maisCar, vetCid[i]);
        }
        
        if(menVal>vetVal[i]){
            menVal = vetVal[i];
            strcpy(maisBar, vetCid[i]);
        }
        
        totVal+=vetVal[i];
        
        printf("\n");
    }
    
    printf("\nA cidade mais cara foi %s.", maisCar);
    printf("\nA cidade mais barata foi %s.", maisBar);
    printf("\nO total gasto em todas as viagens foi: %.2f", totVal);
    
    return 0;
}
