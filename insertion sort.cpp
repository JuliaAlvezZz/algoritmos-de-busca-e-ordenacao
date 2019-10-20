#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

#define N 10

void insertionSort(int *vet){
	int chave, i;
	
	for (int p=1; p<N; p++){
		chave=vet[p];
		i=p-1;
		while (i>=0 && vet[i]>chave){
			vet[i+1]=vet[i];
			i--;
		}
		vet[i+1]=chave;
	}
}

int main(){
	int vet[]={3,5,-1,1,10,2,7,-4,2,0};
	
	insertionSort(vet);
	
	for (int i=0; i<N; i++){
		printf("%d ", vet[i]);
	}
	return 0;
}
