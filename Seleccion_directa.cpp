#include<iostream>
using namespace std;

int SeleccionDir(int A[],int n){
	int menor,k;
	for(int i=1;i<=n-1;i++){
		menor = A[i];
		k=i;
		for(int j=i+1;j<=n;j++){
			if(A[j]<menor){
				menor=A[j];
				k=j;
			}
		}
		A[k]=A[i];
		A[i]=menor;
	}
	return 0;
}
