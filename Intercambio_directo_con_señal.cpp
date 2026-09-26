#include<iostream>
using namespace std;

int InterDirectoSen(int A[],int n){
	int aux, cen, i;
	cen=1;
	i=1;
	while(i<=n-1 && cen==1){
		cen=0;
		for(int j=1;j<=n-i;j++){
			if(A[j]>A[j+1]){
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
				cen=1;
			}
		}
		i++;
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
	
	InterDirectoSen(A,n);
	
	cout<<"\nNumeros ordenadas: ";
	for(int i=1;i<=n;i++){
		cout<<A[i]<<" ";
	}
	return 0;
}
