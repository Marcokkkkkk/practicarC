#include <iostream>
using namespace std;

void fibonnaci(int);

int main(){
    int N = 10;
    fibonnaci(N);
    return 0;
}

void fibonnaci(int N){
    if(N<1){
        cout << "No te pendejees";
    } else {
        int i = 0; //Parte trasera fibonnaci
        int j = 1; //Parte delantera fibonnaci
        int aux;
        for(int k = 0; k<N ; k++){
            cout << i << " ";
            aux = i + j;
            i = j;
            j = aux;

        }

    }
}