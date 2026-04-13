#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void limpa() {
    scanf("%*[^\n]");
    scanf("%*c");
}

int main(){
	int pontos;
	char resposta;
	pontos = 0; 
	
	printf("1. O que e Hypertext Marketup Language?\n a)HTML\n b)CSS\n c)Python\n");
	printf("Digite opcao:");
	scanf("%c", &resposta);
	if (resposta=='a' || resposta=='A'){
		pontos+=1;
		printf("Correto.\n");
	} else{
		printf("Errado.\n");
	}
	Sleep(1500);
	limpa();
	system("cls");
	
	printf("2. O que e JS?\n a)Javascript\n b)Um tipo de bolo\n c)O celular do Elon Musk\n");
	printf("Digite opcao:");
	scanf("%c", &resposta);
	if (resposta=='a' || resposta=='A'){
		pontos+=1;
		printf("Correto.\n");
	} else{
		printf("Errado.\n");
	}
	Sleep(1500);
	limpa();
	system("cls");
	
	printf("3. React e uma:\n a)Farofa\n b)biblioteca front-end JavaScript \n c)Uma linguagem\n");
	printf("Digite opcao:");
	scanf("%c", &resposta);
	if (resposta=='b' || resposta=='B'){
		pontos+=1;
		printf("Correto.\n");
	} else{
		printf("Errado.\n");
	}
	Sleep(1500);
	limpa();
	system("cls");
	
	printf("4. O que e Python:\n a)Churrasco em ingles\n b)biblioteca\n c)Uma linguagem de programacao\n");
	printf("Digite opcao:");
	scanf("%c", &resposta);
	if (resposta=='c' || resposta=='C'){
		pontos+=1;
		printf("Correto.\n");
	} else{
		printf("Errado.\n");
	}
	Sleep(1500);
	limpa();
	system("cls");
	
	printf("5. Pra que serve o teclado:\n a)Digitar\n b)Comer\n c)Cozinhar\n");
	printf("Digite opcao:");
	scanf("%c", &resposta);
	if (resposta=='a' || resposta=='A'){
		pontos+=1;
		printf("Correto.\n");
	} else{
		printf("Errado.\n");
	}
	Sleep(1500);
	limpa();
	system("cls");
	
	printf("6. O que e uma IA:\n a)Incher de Arroz\n b)Inteligencia Artificial\n c)Industria Automotiva\n");
	printf("Digite opcao:");
	scanf("%c", &resposta);
	if (resposta=='b' || resposta=='B'){
		pontos+=1;
		printf("Correto.\n");
	} else{
		printf("Errado.\n");
	}
	Sleep(1500);
	limpa();
	system("cls");
	
	printf("7. Qual a frequencia mais comum nos Monitores no Brasil:\n a)60hz\n b)1hz\n c)100000000000hz\n");
	printf("Digite opcao:");
	scanf("%c", &resposta);
	if (resposta=='a' || resposta=='A'){
		pontos+=1;
		printf("Correto.\n");
	} else{
		printf("Errado.\n");
	}
	Sleep(1500);
	limpa();
	system("cls");
	
	printf("8. Pra que serve um pendrive:\n a)Escrever\n b)Desenhar\n c)Armazenar Arquivos\n");
	printf("Digite opcao:");
	scanf("%c", &resposta);
	if (resposta=='c' || resposta=='C'){
		pontos+=1;
		printf("Correto.\n");
	} else{
		printf("Errado.\n");
	}
	Sleep(1500);
	limpa();
	system("cls");
	
	printf("9. O que e o Windows:\n a)Um mouse\n b)Um Sistema Operacional\n c)Um teclado\n");
	printf("Digite opcao:");
	scanf("%c", &resposta);
	if (resposta=='b' || resposta=='B'){
		pontos+=1;
		printf("Correto.\n");
	} else{
		printf("Errado.\n");
	}
	Sleep(1500);
	limpa();
	system("cls");
	
	printf("10. O que e BIOS:\n a)Basic Input Output System\n b)Um Deus do Dragon Ball\n c)Uma parti��o da Biologia\n");
	printf("Digite opcao:");
	scanf("%c", &resposta);
	if (resposta=='a' || resposta=='A'){
		pontos+=1;
		printf("Correto.\n");
	} else{
		printf("Errado.\n");
	}
	Sleep(1500);
	limpa();
	system("cls");
	
	printf("Seu total de pontos foi: %d", pontos);
	
	return 0;
}
