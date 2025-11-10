#include <iostream>
using namespace std;

void panederia();

int main(){
    panederia();
    return 0;
}

void panederia(){
    int opcion = 0; //Esto sirve después para elegir una opcion de las tres que hay
    int panRecaudado = 0;
    int masitaRecaudado = 0;
    int cafeRecaudado = 0;
    //Los "Recaudado" son para sumar lo que se reacuado en cada uno por separado
    //Todos inician con 0 por una sencilla razón:
    //Los "Recaudado" si no inician en 0 entonces literalmente si le sumamos una recaudación mas
    //el programa dice xd
    //En la opcion lo mismo, pero mas que todo para que el while funciones correctamente

    while(opcion!=-1){

        cout << endl 
        << "Opciones: " << endl << 
        "1 - Pan : 2bs" << endl <<
         "2 - Masita : 3bs" << endl <<
        "3 - Cafe : 5bs" << endl <<
        "-1 - Salir" << endl;
        //Es lo mismo que ponerlo en una línea todo.

        cin>>opcion;

        switch (opcion){
            case 1:
                panRecaudado +=2;
                cout << "Se vendio un pansito";
                break;
            case 2:
                masitaRecaudado += 3;
                cout << "Se vendio una masita";
                break;
            case 3:
                cafeRecaudado += 5;
                cout << "Se vendio un cafecito";
                break;
            case 4:
                cout << "El usuario salio";
                break;  
        }
    }

    cout << endl;
    cout << endl;

    //Mostrar resultado de la panederia
    cout << "cantidad recaudada de los panes: " << panRecaudado << "Bs" << endl;
    cout << "cantidad recaudada de la masita: " << masitaRecaudado << "Bs" << endl;
    cout << "cantidad recaudada del cafe: " << cafeRecaudado << "Bs" << endl;

    //Si se quiere saber la cantidad vendida se pudo hacer solo +1 en todos o esto:
    cout << "cantidad vendida de los panes: " << panRecaudado/2 << endl;
    cout << "cantidad vendida de la masita: " << masitaRecaudado/3 << endl;
    cout << "cantidad vendida del cafe: " << cafeRecaudado/5 << endl;

    //Total:
    int totalRecaudado = panRecaudado + masitaRecaudado + cafeRecaudado;
    cout << "cantidad recaudada en total: " << totalRecaudado << "Bs";
}