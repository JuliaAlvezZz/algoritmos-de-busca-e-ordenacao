#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int buscaBinaria(int *vet, int chave){
	int direita=10-1, esquerda=0, meio, encontrado=0;
	
	while ((esquerda<=direita)&&(!encontrado)){
		meio=(esquerda+direita)/2;
		if (vet[meio]==chave) encontrado=1;
		else if (chave<vet[meio]) direita=meio-1;
		else esquerda=meio+1;
	}
	
	return meio;
}

int main(){
	int vet[10]={0,1,2,3,4,5,6,7,8,9};
	int x=buscaBinaria(vet, 6);
	printf("%d", x);
}
