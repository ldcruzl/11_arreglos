//CRUZ LLICA, Luis David

#include<iostream>
using namespace std;

int main(){
    float tempma[7], tempmin[7], tempme, tempb=999;
    for(int i=0; i<7; i++){
        cout<<"Ingrese la menor temperatura: ";cin>>tempmin[i-1];
        for(int j=0; j<i; j++){
            if(tempmin[i-1]==tempma[j]){
                cout<<"La temperatura conincide con la temperatura maxima de: "<<j+1<<endl;
            }
        }
        cout<<"Ingrese la mayor temperatura: ";cin>>tempma[i-1];
        for(int j=0; j<i-1; j++){
            if(tempmin[i-1]==tempma[j]){
                cout<<"La temperatura conincide con la temperatura maxima de: "<<j+1<<endl;
            }
        }
        if(tempmin[i-1]<tempb){
            tempb=tempmin[i-1];
        }
    }
    for(int i=0; i<7; i++){
        tempme=(tempma[i-1]+tempmin[i-1])/2;
        cout<<"La temperatura media del "<<i<<" es: "<<tempme<<endl;
        cout<<"El dia con menos temperatura es: "<<tempb<<endl;
    }
    return 0;
}