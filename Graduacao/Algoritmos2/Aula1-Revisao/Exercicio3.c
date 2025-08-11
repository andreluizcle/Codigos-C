#include <stdio.h>
#include <stdlib.h>

int main()
{
    int palpite, num = 29;
    printf("Tente adivinhar o numero correto!\n");
    for(int i = 0; i<4; i++){
        scanf("%d", &palpite);
        if((abs(palpite-num)<=3) && (abs(palpite-num)!=0)){
            printf("Esta perto!\n");
        } else if(palpite < num){
            printf("Palpite muito baixo!\n");
        } else if(palpite > num){
            printf("Palpite muito alto!\n");
        } else if(palpite == num){
           printf("Acertou!"); 
           break;
        }
    }

    return 0;
}
