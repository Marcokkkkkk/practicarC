#include <iostream>
using namespace std;

void piramede(int);
void piramede2(int);

int main(){
    int N = 4;
    piramede(N);
    //Esta piramede se muestra al otro lado

    int N2 = 4;
    piramede2(N2);
    //Esta piramede es central

    return 0;
}

void piramede(int N){
    if(N<1){
        cout<<"No papu";
    } else {
        int j = 0;
        for(int i = 0; i<N;i++){
            j++;
            for(int k = 0; k<N; k++){
                if(k+j>=N){
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
}

void piramede2(int N){
    if(N<1){
        cout<<"Ya pues";
    } else {
        int i = 0;
        for(int j = 0; j<N ; j++){
            i++;
            
            for(int k=0;k<N+i;k++){
                if(k+i>=N){
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout<<endl;

        }
        //Si queremos una pirámede de punta de un asterísco, simplemente
        //hay que poner en la condicional del segundo for: k<N+i-1
    }
}