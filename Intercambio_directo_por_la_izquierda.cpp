#include<iostream>
usign namespace std;

int InterDirectoDer(int A[],int n){
	int aux;
	for(int i=2;i<=n;i++){
		for(int j=n;j>=i;j--){
			if(A[j]<A[j-1]){
				aux=A[j-1];
				A[j-1]=A[j];
				A[j]=aux;
			}
		}
	}
	return 0;
}  
