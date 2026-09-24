#include<iostream>
using namespace std;

int ShellSort(intA[],int n){
	int k,aux;
	k=n+1;
	while(k>1){
		k=k/2
		for(int i=k+1;i<=n){
			aux=A[i];
			j=i;
			while(j-k>=1 && A[j-k]){
				A[j]=A[j-k];
				j=j-k;
			}
			A[j]=aux;
		}
	}
	return 0;
}
