//CRUZ LLICA, Luis David

#include<iostream>
using namespace std;

void relleno(int* arreglo, int tam, int mult);

int main(){
    int tam, mult;
    cout<<"Ingrese el tamanio del arreglo: ";cin>>tam;
    int* arreglo= new int[tam];
    cout<<"Ingrese el numero a completar con multiplos: ";cin>>mult;
    relleno(arreglo, tam, mult);
    cout<<"Los multiplos son: ";
    for(int i=0; i<tam; i++){
        cout<<arreglo[i]<<" "<<endl;
    }
    return 0;
}
//Definimos la funcion:
void relleno(int* arreglo, int tam, int mult){
    for(int i=0; i<tam; i++){
        arreglo[i]=mult*(i+1);
    }
}