//A seguir mais um desafio proposto em ED II, onde neste, consiste em criar um código baseado nas Árvores Binárias.
//Os dados foram armazenados usando o meu RA "18275595" de forma estática, e respeitando a ordem de implementações de uma Árvore Binária.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define tamanho 15
#define E 0
#define D 1
#define R -1

struct str_no
{
	int dado;
	int esquerda;
	int direita;
	int pai;
};

struct str_no arvore[tamanho];          
int lado, pai, no, indice = 0;    
int op = 1, resp;
                                

void arvore_insere(int pai, char dado, int lado);
int arvore_procura(char dado);
int arvore_p_rep(char dado);
int emOrdem(int n);

int main()
{
	int pass, resp;
	pai = -1;
	pass = arvore_procura(pai);
	no = 1;
	lado = -1;
	arvore_insere(pass, no, lado);
	
	pai = 1;
	pass = arvore_procura(pai);
	no = 8;
	lado = 1;
	arvore_insere(pass, no, lado);
	
	pai = 8;
	pass = arvore_procura(pai);
	no = 2;
	lado = 0;
	arvore_insere(pass, no, lado);
	
	pai = 2;
	pass = arvore_procura(pai);
	no = 7;
	lado = 1;
	arvore_insere(pass, no, lado);
	
	pai = 7;
	pass = arvore_procura(pai);
	no = 5;
	lado = 0;
	arvore_insere(pass, no, lado);
	
	pai = 5;
	pass = arvore_procura(pai);
	no = 5;
	lado = 1;
	arvore_insere(pass, no, lado);
	
	pai = 8;
	pass = arvore_procura(pai);
	no = 9;
	lado = 1;
	arvore_insere(pass, no, lado);
	
	pai = 5;
	pass = arvore_p_rep(pai);
	no = 5;
	lado = 1;
	arvore_insere(pass, no, lado);
	
	do
	{
		printf("Digite 1 para exibir o percurso em ordem \n");
		printf("Digite 2 para exibir nos/pais\n");
		scanf("%d", &op);
		fflush(stdin);
		switch(op)
		{
			case 1:
				system("cls");
				emOrdem(0);
			break;
			
			case 2:
				for (int o = 0; o < tamanho; o++)
				{
					if(arvore[o].dado != 0)
					{
						printf("No: %d = posi vetor: %d, posicao do pai no vetor: %d \n", arvore[o].dado, o, arvore[o].pai);
					}
				}
				
			break;
		}
		printf("\n");
		printf("Para retornar ao menu, tecle 1\n");
		scanf("%d", &resp);
		system("cls");
	
	} while (resp == 1);
	
	return(0);
};

void arvore_insere(int pai, char dado, int lado)
{	
	switch(lado)
	{
		case E:
			arvore[pai].esquerda = indice;
			arvore[indice].dado = dado;
			arvore[indice].pai = pai;
			arvore[indice].esquerda = -1;
 			arvore[indice].direita = -1;
 			indice++;
 		break;
 		
		case D:
			arvore[pai].direita = indice;
			arvore[indice].dado = dado;
			arvore[indice].pai = pai;
			arvore[indice].esquerda = -1;
 			arvore[indice].direita = -1;
 			indice++;
 		break;
 		
 		case R:
			arvore[indice].dado = dado;
 			arvore[indice].pai = -1;
 			arvore[indice].esquerda = -1;
 			arvore[indice].direita = -1;
 			indice++;
 		break;
	}
	indice++;
	
}

int arvore_procura(char dado){
 	if (indice != 0){
 		for (int i = 0; i<indice; i++){
			if (arvore[i].dado == dado) {
 				return (i);
 			}
 		}
 	}
 	else {
 		return (0);
	}
}

int arvore_p_rep(char dado){
 	if (indice != 0){
 		for (int i = 0; i<indice; i++){
			if (arvore[i].dado == dado && arvore[i].pai == 8) {
 				return (i);
 			}
 		}
 	}
 	else {
 		return (0);
	}
}
	
int emOrdem(int n){
    if (n != -1){
    emOrdem(arvore[n].esquerda);
    printf("| %d ", arvore[n].dado); //visita o nó atual
    emOrdem(arvore[n].direita);
    return (1);
    }
 return (0);
}
