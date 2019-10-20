#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

#define N 10
#define INTMAX 100

void criaHeap(int *vet, int i, int f){
	int aux=vet[i], j=i*2+1;
	
	while (j<=f){
		if (j<f)
			if (vet[j]<vet[j+1]) j++;
		if (aux<vet[j]){
			vet[i]=vet[j];
			i=j;
			j=i*2+1;
		}else j=f+1;
	}
	vet[i]=aux;
}

void heapSort(int *vet){
	int aux;
	
	for (int i=(N-1)/2; i>=0; i--)
		criaHeap(vet, i, N-1);
	for (int i=N-1; i>=1; i--){
		aux=vet[0];
		vet[0]=vet[i];
		vet[i]=aux;
		criaHeap(vet, 0, i-1);
	}
}

int main(){
	int vet[]={3,5,-1,1,10,2,7,-4,2,0};
	
	heapSort(vet);
	
	for (int i=0; i<N; i++){
		printf("%d ", vet[i]);
	}
	
	return 0;
}
