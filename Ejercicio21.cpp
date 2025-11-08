#include <iostream>
using namespace std;

void piramede(int);

int main(){
    int N = 4;
    piramede(N);
    //Caso correcto

    cout << endl;
    cout << endl;

    int N2 = -1;
    piramede(N2);
    //Caso no posible

    return 0;
}

void piramede(int N){
    if(N<1){
        cout<<"Debes introducir un número positivo señor";
        //Una piramede de 0 o menos cantidad de filas no es posible
    } else {
        int j;
        for(int i = 1; i<=N; i++){ //Creador de la piramede
            j = i;
            while(j>0){
                cout << "* ";
                j--; 
            }
            cout << endl;
        }
    }
}