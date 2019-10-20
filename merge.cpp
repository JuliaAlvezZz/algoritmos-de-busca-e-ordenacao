#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

#define N 10
#define INTMAX 100

void merge(int *subvet, int p, int q, int r){
	int i, j, k, n1=q-p+1, n2=r-q, E[n1+1], D[n2+1];
	
	for (i=0; i<n1; i++)
		E[i]=subvet[p+i];
	for (i=0; i<n2; i++)
		D[i]=subvet[q+i+1];
	
	E[n1]=INTMAX;
	D[n2]=INTMAX;
	i=j=0;
	
	for (k=p; k<=r; k++){
		if (E[i]<=D[j]){
			subvet[k]=E[i];
			i++;
		}else{
			subvet[k]=D[j];
			j++;
		}
	}
}

void mergeSort(int *vet, int p, int r){
	int q;

	if (p<r){
		q=(p+r)/2;
		mergeSort(vet, p, q);
		mergeSort(vet, q+1, r);
		merge(vet, p, q, r);
	}
}

int main(){
	int vet[]={3,5,-1,1,10,2,7,-4,2,0};
	
	mergeSort(vet, 0, N-1);
	
	for (int i=0; i<N; i++){
		printf("%d ", vet[i]);
	}
	
	return 0;
}
