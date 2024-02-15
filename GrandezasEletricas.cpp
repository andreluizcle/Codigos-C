#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	int combin, ogrand;
	float tens, corren, poten, resis;

	while (combin <= 0 || combin >=6){
		printf("Quais informacoes voce tem?(Digite o numero relacionado as informacoes que voce tem)\n 1-Tensao e Corrente \n 2-Tensao e Potencia \n 3-Tensao e Resistencia \n 4-Corrente e Potencia \n 5-Corrente e Resistencia \n");
		scanf("%d", &combin);
		system("cls");
		if (combin >= 1 && combin <= 5)
			break; 
		printf("Digite um numero valido!");
		Sleep(1000);
		system("cls");
	}
	
	switch(combin){
		case 1:
			printf("Digite a Tensao: ");
			scanf("%f", &tens);
			printf("Digite a Corrente: ");
			scanf("%f", &corren);
			
			while(ogrand != 1 || ogrand != 2){
				printf("O que voce deseja descobrir? \n 1-Potencia \n 2-Resistencia\n");
				scanf("%d", &ogrand);
				if (ogrand >= 1 && ogrand <= 2)
					break; 
				system("cls");
				printf("Digite um numero valido!");
				Sleep(1000);
				system("cls");
			}

			switch (ogrand){
				case 1:
					poten = tens * corren;
					printf("Potencia: %fW", poten);
					break;
				case 2:
					resis = tens/corren;
					printf("Resistencia: %fOhw", resis);
					break;	
			}
			
			break;
		case 2:
			printf("Digite a Tensao: ");
			scanf("%f", &tens);
			printf("Digite a Potencia: ");
			scanf("%f", &poten);
			
			while(ogrand != 1 || ogrand != 2){
				printf("O que voce deseja descobrir? \n 1-Corrente \n 2-Resistencia\n");
				scanf("%d", &ogrand);
				if (ogrand >= 1 && ogrand <= 2)
					break; 
				system("cls");
				printf("Digite um numero valido!");
				Sleep(1000);
				system("cls");
			}

			switch (ogrand){
				case 1:
					corren = poten/tens;
					printf("Corrente: %fA", corren);
					break;
				case 2:
					resis = (poten/tens)*tens;
					printf("Resistencia: %fOhw", resis);
					break;	
			}
			break;
		case 3:
			printf("Digite a Tensao: ");
			scanf("%f", &tens);
			printf("Digite a Resistencia: ");
			scanf("%f", &resis);
			
			while(ogrand != 1 || ogrand != 2){
				printf("O que voce deseja descobrir? \n 1-Corrente \n 2-Potencia\n");
				scanf("%d", &ogrand);
				if (ogrand >= 1 && ogrand <= 2)
					break; 
				system("cls");
				printf("Digite um numero valido!");
				Sleep(1000);
				system("cls");
			}

			switch (ogrand){
				case 1:
					corren = tens/resis;
					printf("Corrente: %fA", corren);
					break;
				case 2:
					poten = tens*(tens/resis);
					printf("Potencia: %fW", poten);
					break;	
			}
			break;
		case 4:
			printf("Digite a Corrente: ");
			scanf("%f", &corren);
			printf("Digite a Potencia: ");
			scanf("%f", &poten);
			
			while(ogrand != 1 || ogrand != 2){
				printf("O que voce deseja descobrir? \n 1-Tensao \n 2-Resistencia\n");
				scanf("%d", &ogrand);
				if (ogrand >= 1 && ogrand <= 2)
					break; 
				system("cls");
				printf("Digite um numero valido!");
				Sleep(1000);
				system("cls");
			}

			switch (ogrand){
				case 1:
					tens = poten/corren;
					printf("Tensao: %fV", tens);
					break;
				case 2:
					resis = (poten/corren)*corren;
					printf("Resistencia: %fOhw", resis);
					break;	
			}
			break;
		case 5:
			printf("Digite a Corrente: ");
			scanf("%f", &corren);
			printf("Digite a Resistencia: ");
			scanf("%f", &resis);
			
			while(ogrand != 1 || ogrand != 2){
				printf("O que voce deseja descobrir? \n 1-Tensao \n 2-Potencia\n");
				scanf("%d", &ogrand);
				if (ogrand >= 1 && ogrand <= 2)
					break; 
				system("cls");
				printf("Digite um numero valido!");
				Sleep(1000);
				system("cls");
			}
			
			switch (ogrand){
				case 1:
					tens = resis*corren;
					printf("Tensao: %fV", tens);
					break;
				case 2:
					poten = (corren*resis)*corren;
					printf("Potencia: %fW", poten);
					break;	
			}
			break;
	}
	
	return 0;
} 
