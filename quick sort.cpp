#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

#define N 10
#define INTMAX 100

int particiona(int *vet, int i, int f){
	int esq=i, dir=f, pivo=vet[i], aux;
	
	while (esq<dir){
		while (vet[esq]<=pivo) esq++;
		while (vet[dir]>pivo) dir--;
		if (esq<dir){
			aux=vet[esq];
			vet[esq]=vet[dir];
			vet[dir]=aux;
		}
	}
	
	vet[i]=vet[dir];
	vet[dir]=pivo;
	
	return dir;
}

void quickSort(int *vet, int i, int f){
	int pivo=0;
	
	if (f>i){
		pivo=particiona(vet, i, f);
		quickSort(vet, i, pivo-1);
		quickSort(vet, pivo+1, f);
	}
}

int main(){
	int vet[]={3,5,-1,1,10,2,7,-4,2,0};
	
	quickSort(vet, 0, N-1);
	
	for (int i=0; i<N; i++){
		printf("%d ", vet[i]);
	}
	
	return 0;
}
