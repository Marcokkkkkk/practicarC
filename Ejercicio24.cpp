#include <iostream>
using namespace std;

void perfecto(int);

int main(){
    int N = 6;
    perfecto(N);

    cout << endl;
    cout << endl;

    N = 14;
    perfecto(N);
    return 0;
}

void perfecto(int N){
    if(N<1){
        cout << "bruh";
    } else {
        int suma = 0;
        for(int i = 1; i<=N-1 ; i++){
            if(N%i==0){
                cout << i << "+";
                suma += i;
            }
        }
        if(suma == N){
            cout << "=" << N; 
        } else {
            cout << "!=" << N;
        }
    }
}