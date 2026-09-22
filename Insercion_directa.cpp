#include<iostream>
using namespace std;

int InsercionDir(int A[],int n){
	int aux,k;
	for(int i=2;i<=n;i++){
		aux=A[i];
		k=i-1;
		while(k>0 && aux<A[k]){
			A[k+1]=A[k];
			k=k-1;
		}
		A[k+1]=aux;
	}
	return 0;
}
