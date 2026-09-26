#include<iostream>
using namespace std;

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

int main(){
	int A[90],n;
	
	cout<<"Cuantos de numeros va ingresar?: ";
	cin>>n;
	cout<<"\nIngrese los numeros a ordenar: "<<endl;
	for(int i=1;i<=n;i++){
		cout<<" ";
		cin>>A[i];
	}
	
	InterDirectoDer(A,n);
	
	cout<<"\nNumeros ordenadas: ";
	for(int i=1;i<=n;i++){
		cout<<A[i]<<" ";
	}
	return 0;
}
