#include <iostream>
using namespace std;

void palindromo(int);

int main(){
    int N = 12321;
    palindromo(N);

    cout << endl;
    cout << endl;

    N = 41243;
    palindromo(N);

    return 0;
}

void palindromo(int N){
    if(N<10){
        cout << "No puede ser palindromo";
    } else {
        int palindromo = 0;
        int aux = N;
        while(aux>0){
            palindromo = aux%10 + palindromo*10;
            aux = aux/10;
        }
        if(palindromo == N){
            cout << "Es palindromo" << palindromo;
        } else{
            cout << "No es palindromo: " << palindromo;
        }
    }
}