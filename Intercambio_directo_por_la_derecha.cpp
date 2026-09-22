#include<iostream>
using namespace std;

int InterDirectoDer(int A[],int n){
	int aux;
	for(int i=1;i<n-1;i++){
		for(int j=1;j<n-i;j++){
			if(A[j]>A[j+1]){
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
			}
		}
	}
	return 0;
}       
