#include <iostream>
using namespace std;

void calcularPotencias(int,int);

int main(){
    int base = 3;
    int exponente = 3;
    calcularPotencias(base,exponente);
    //Ya solo pongo una, pq me da flojera 

    return 0;
}

void calcularPotencias(int base, int exponente){
    if(base<0 || exponente<0){
        if(exponente==0){
            cout << "El resultado es: 1";
        } else {
            cout << "No se calcula exponentes negativas";
        }
    } else {
        int resultado = 1;
        while(exponente>0){
            resultado = resultado*base;
            cout << base << "*";
            exponente--;
        }
        cout<<"= "<< resultado; 
    }
}
