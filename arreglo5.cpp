//CRUZ LLICA, Luis David

#include<iostream>
#include<string>
using namespace std;

int main(){
    int c1, c2;
    cout<<"Ingrese el numero de estudiantes de FP: ";cin>>c1;
    string fp[c1];
    for(int i=0; i<c1; i++){
        cout<<"Ingrese los nombres de los estudiantes de FP: ";cin>>fp[i];
    }
    cout<<"ingrese el numero de estudiantes de PG: ";cin>>c2;
    string pg[c2];
    for(int i=0; i<c1; i++){
        cout<<"Ingrese los nombres de los estudiantes de PG: ";cin>>pg[i];
    }
    cout<<"Los nombres repetidos son: ";
    for(int i=0; i<c1; i++){
        for(int h=0; h<c2; h++){
            if(fp[i]==pg[h]){
                cout<<fp[i]<<endl;
            }
        }
    }
    return 0;
}