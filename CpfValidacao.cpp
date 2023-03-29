#include <stdio.h>

int verificar(int res){
    int a;
    if (res < 2){
        a = 0;
        return a;
    } else{
        a = 11-res;
    }
}

int main(){
    int arrayCpf[11], res1, res2, digverifi1, digverifi2;
    unsigned long long int cpf;
    printf("Digite o Cpf(Sem espacos, hifen e pontos): ");
    scanf("%llu", &cpf);
    
    for (int i = 10; i >= 0 ; i--){
        arrayCpf[i] = cpf % 10;
        cpf /= 10;
    }
    
    res1 = (((arrayCpf[0]*10)+(arrayCpf[1]*9)+(arrayCpf[2]*8)+(arrayCpf[3]*7)+(arrayCpf[4]*6)+(arrayCpf[5]*5)+(arrayCpf[6]*4)+(arrayCpf[7]*3)+(arrayCpf[8]*2))%11);
    digverifi1 = verificar(res1);
    res2 = (((arrayCpf[0]*11)+(arrayCpf[1]*10)+(arrayCpf[2]*9)+(arrayCpf[3]*8)+(arrayCpf[4]*7)+(arrayCpf[5]*6)+(arrayCpf[6]*5)+(arrayCpf[7]*4)+(arrayCpf[8]*3)+(digverifi1*2))%11);
    digverifi2 = verificar(res2);

    if (digverifi1 == arrayCpf[9] && digverifi2 == arrayCpf[10]){
        printf("CPF Valido!");
    } else{
        printf("CPF Invalido!");
    }

    return 0;
}