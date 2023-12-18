#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int conteudo;
	struct no *esquerda, *direita;
}No;

No *inserirNovaVersao(No *raiz, int valor){
	if(raiz == NULL){
		No *novo = (No*)malloc(sizeof(No));
		novo->conteudo = valor;
		novo->esquerda = NULL;
		novo->direita = NULL;
		return novo;
	} else{
		if(valor < raiz->conteudo)
			raiz->esquerda = inserirNovaVersao(raiz->esquerda, valor);
		if(valor > raiz->conteudo)
			raiz->direita = inserirNovaVersao(raiz->direita, valor);
		return raiz;
	}
}

int buscar(No *raiz, int chave){
	if(raiz == NULL){
		return -1;
	} else{
		if(raiz->conteudo == chave)
			return raiz->conteudo;
		else{
			if(chave < raiz->conteudo)
				return buscar(raiz->esquerda, chave);
			else
				return buscar(raiz->direita, chave);
		}
	}
}

int buscarpai(No *raiz, int chave) {
    if (raiz == NULL) {
        return -1;
    }
    if ((raiz->esquerda != NULL && raiz->esquerda->conteudo == chave) || (raiz->direita != NULL && raiz->direita->conteudo == chave)) {
        return raiz->conteudo;
    }
    if (chave < raiz->conteudo) {
        return buscarpai(raiz->esquerda, chave);
    } else{
        return buscarpai(raiz->direita, chave);
    }
}

No* remover(No *raiz, int chave){
	if(raiz == NULL){
		printf("Valor nao encontrado!\n");
		return NULL;
	} else{
		if(raiz->conteudo == chave){
			if(raiz->esquerda == NULL && raiz->direita == NULL){
				free(raiz);
				return NULL;
			} else{
				if(raiz->esquerda == NULL || raiz->direita == NULL){
					No *aux;
					if(raiz->esquerda != NULL)
						aux = raiz->esquerda;
					else
						aux = raiz->direita;
					free(raiz);
					return aux;
				} else{
					No *aux = raiz->esquerda;
					while(aux->direita != NULL)
						aux = aux->direita;
					raiz->conteudo = aux->conteudo;
					aux->conteudo = chave;
					raiz->esquerda = remover(raiz->esquerda, chave);
					return raiz;
				}
			}
		} else{
			if(chave < raiz->conteudo)
				raiz->esquerda = remover(raiz->esquerda, chave);
			else
				raiz->direita = remover(raiz->direita, chave);
			return raiz;
		}
	}
}

void imprimir(No *raiz){
	if(raiz != NULL){
		imprimir(raiz->esquerda);
		printf("%d ", raiz->conteudo);
		imprimir(raiz->direita);
	}
}

int main(){
	int op, valor;
	No *raiz = NULL;
	
	do{
		imprimir(raiz);
		printf("\n1-inserir\n2-buscar\n3-buscar pai\n4-remover\n5-sair\n");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				printf("Digite um valor:");
				scanf("%d", &valor);
				raiz = inserirNovaVersao(raiz, valor);
				break;
			case 2:
				printf("Qual valor deseja buscar? ");
				scanf("%d", &valor);
				printf("Resultado da buscar: %d\n", buscar(raiz, valor));
				break;
			case 3:
				printf("Qual valor deseja encontra o pai? ");
				scanf("%d", &valor);
				printf("o pai de %d eh %d\n", valor, buscarpai(raiz, valor));
				break;
			case 4:
				printf("Digite um valor a ser removido: ");
				scanf("%d", &valor);
				raiz = remover(raiz, valor);
				break;
			case 5:
				printf("\nSaindo...\n");
				break;
			default:
				printf("\nOpcao invalida...\n");		
		}
	}while(op !=5);
	
	return 0;
}
