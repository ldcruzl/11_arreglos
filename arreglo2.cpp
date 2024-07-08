//CRUZ LLICA, Luis David

#include<iostream>
using namespace std;

int main(){
    int n, im, par;
    im=0;
    par=0;
    cout<<"Ingrese la cantidad del arreglo: ";cin>>n;
    int* A= new int[n];
    int* P= new int[par];
    int* I= new int[im];
    for(int i=0; i<n; i++){
        cout<<"Ingrese un numero: ";cin>>A[i];
        if(A[i]%2==0){
            par=par+1;
            I[im]=A[i];
        }
        else{
            im=im+1;
            P[par]=A[i];
        }
    }
    cout<<"La cantidad de numeros pares es: "<<par<<endl;
    cout<<"La cantidad de numeros impares es: "<<im<<endl;
    return 0;
}