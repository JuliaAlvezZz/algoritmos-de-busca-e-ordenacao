#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

#define N 10

void bubbleSort(int *vet){
	int aux;
	
	for (int topo=1; topo<N; topo++){
		for (int bolha=N-1; bolha>=topo; bolha--){
			if (vet[bolha]<vet[bolha-1]){
				aux=vet[bolha];
				vet[bolha]=vet[bolha-1];
				vet[bolha-1]=aux;
			}
		}
	}
}

int main(){
	int vet[]={3,5,-1,1,10,2,7,-4,2,0};
	
	bubbleSort(vet);
	
	for (int i=0; i<N; i++){
		printf("%d ", vet[i]);
	}
	return 0;
}
