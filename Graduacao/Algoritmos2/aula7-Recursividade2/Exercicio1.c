#include <stdio.h>
#include <string.h>

int verificarPalindromo(char str[50], int inicio, int fim){
    if(inicio>=fim) return 1;
    if(str[inicio] == str[fim]) return verificarPalindromo(str, inicio+1, fim-1);
    return 0;
}

int main()
{
    char str[50];
    printf("Digite uma palavra: ");
    scanf("%s", str);
    if(verificarPalindromo(str, 0, strlen(str)-1)){
        printf("É palindromo!");
    } else{
        printf("Não é palindromo!");
    }

    return 0;
}
