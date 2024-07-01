//CRUZ LLICA, Luis David

#include<iostream>
using namespace std;

int main(){
	int n;
	int s=0;
	float h=0;
	cout<<"Ingrese la cantidad de numeros enteros: ";cin>>n;
	int*A=new int[n];
	for(int i=0;i<n;i++){
		cout<<"Ingrese el numero: ";cin>>A[i];
	s=s+A[i];
	if(A[i]==0){
		h=h+1;
	}
 } cout<<"La sumatoria de los numeros ingresados es "<<s<<endl;
 float p=(h/n)*100;
 cout<<"El porcentaje de valores ceros ingresados es "<<p<<endl;
 return 0;
}