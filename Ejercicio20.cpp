#include <iostream>
using namespace std;

void contadorDeDigitos(int);

int main(){
    int n = 123;
    cout << "Para n = " << n << ":" << endl;
    contadorDeDigitos(n);
    // Caso correcto

    cout<<endl;
    cout<<endl;

    int n2 = -1;
    cout << "Para n2 = " << n2 << ":" << endl;
    contadorDeDigitos(n2);
    // Caso incorrecto (Negativo)

    cout<<endl;
    cout<<endl;

    int n3 = 0;
    cout << "Para n3 = " << n3 << ":" << endl;
    contadorDeDigitos(n3);
    // Caso especial (Cero)

    return 0;
}

void contadorDeDigitos(int n){
    if(n<0){
        cout<<"No es posible agregar un numero entero negativo"<<endl;
    } else if (n==0) { // Manejo especial para el 0
        cout<<"El numero tiene la cantidad de digitos: 1";
    }
    else {
        int i = 0;
        while(n>0){ //El contador de dígitos
            i++;
            n=n/10;
        }
        cout<<"El numero tiene la cantidad de digitos: "<<i;
    }
    return;
}