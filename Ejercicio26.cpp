#include <iostream>
using namespace std;

void primosN(int);

int main(){
    int N = 100;
    primosN(N);
    return 0;
}

void primosN(int N){
    if(N<2){
        cout << "No puede ser primo";
    } else {
        int k; // contador de multiplos, para verificar si es primo
        for(int i = 2; i<N ; i++){
            k=0;
            for(int j = 2; j<=i; j++){
                if(i%j == 0){
                    k++;
                }
            }
            if(k==1){
                cout << i << " ";
            }
        }
    }
}