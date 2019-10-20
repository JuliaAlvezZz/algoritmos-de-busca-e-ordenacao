#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

#define N 10

void shellSort(int *vet){
	int k=3, h=1, aux, j;
	
	while (h<=N) h=k*h+1;
	while (h!=1){
		h=h/k;
		for (int i=h; i<N; i++){
			aux=vet[i];
			j=i-h;
			while (j>=0 && aux<vet[j]){
				vet[j+h]=vet[j];
				j=j-h;
			}
			vet[j+h]=aux;
		}
	}
}

int main(){
	int vet[]={3,5,-1,1,10,2,7,-4,2,0};
	
	shellSort(vet);
	
	for (int i=0; i<N; i++){
		printf("%d ", vet[i]);
	}
	return 0;
}
