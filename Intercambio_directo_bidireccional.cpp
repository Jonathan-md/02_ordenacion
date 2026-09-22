#include<iostream>
using namespace std;

int InterDirectoBi(int A[], int n){
	int izq,der,k,aux;
	izq=2;
	der=n;
	k=n;
	while(izq<=der){
		for(int i=der;i<=izq;i++){
			if(A[i-1]>A[i]){
				aux=A[i-1];
				A[i-1]=A[i];
				A[i]=aux;
				k=i;
			}
		}
		izq=k+1;
		for(int i=izq;i<=der;i++){
			if(A[i-1]>A[i]){
				aux=A[i-1];
				A[i-1]=A[i];
				A[i]=aux;
				k=i;
			}
		}
		der=k-1;
	}
	return 0;
}
