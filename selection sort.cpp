#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

#define N 10

void selectionSort(int *vet){
	int aux, i, menorChave;
	
	for (int p=0; p<N-1; p++){
		menorChave=vet[p];
		i=p;
		for (int j=p+1; j<N; j++){
			if (vet[j]<menorChave){
				menorChave=vet[j];
				i=j;
			}
		}
		aux=vet[p];
		vet[p]=vet[i];
		vet[i]=aux;
	}
}

int main(){
	int vet[]={3,5,-1,1,10,2,7,-4,2,0};
	
	selectionSort(vet);
	
	for (int i=0; i<N; i++){
		printf("%d ", vet[i]);
	}
	return 0;
}
