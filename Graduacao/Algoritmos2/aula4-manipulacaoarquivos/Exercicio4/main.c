#include <stdio.h>

int main()
{
    FILE* arq = fopen("arquivo.txt", "r");
    int vogal = 0;
    int consoante = 0;
    if(arq == NULL){
        printf("Error no arquivo");
        return 0;
    }
    
    while(1){
        char c = fgetc(arq);
        if(c == EOF){
            break;
        }
            
        
        if(((c >= 'a' ) && (c <= 'z')) || ((c >= 'A' ) && (c <= 'Z'))){
            if((c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U') || (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')){
                vogal++;
            } else{
                consoante++;
            }
        }
    }
    printf("Vogais: %d Consoantes: %d", vogal, consoante);

    return 0;
}
