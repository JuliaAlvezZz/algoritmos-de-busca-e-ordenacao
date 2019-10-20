#include <stdio.h>
#include <stdlib.h>{}
#include <string.h>
#include <time.h>

int buscaSequencial(int *vet,int chave){
	int i=0, encontrado=0;
	while ((i<10)&&(!encontrado)){
		if (vet[i]==chave) encontrado=1;
		else i++;
	}
	return i;
}

int main(){
	int vet[10]={3,5,-1,1,10,2,-30,-4,2,0};
	int x=buscaSequencial(vet, 2);
	printf("%d", x);
}
