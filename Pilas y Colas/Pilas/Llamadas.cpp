#include <iostream>
#include <stack>

using namespace std;


struct Llamadas
{
    string numero;
    string duracion;
};


int main(){

    stack<Llamadas> LlamadasTelefonicas;

    Llamadas LlamadasT;
    while(true){

        cout << "Ingrese el numero de la llamada: (0. para salir) " << endl;
        cin >> LlamadasT.numero;
        if(LlamadasT.numero == "0"){
            break;
        }
        else{

            cout << "Ingrese la duracion de la llamada(minutos:segundos): " << endl;
            cin >> LlamadasT.duracion;
            LlamadasTelefonicas.push(LlamadasT);
        }


    }
    return 0;
}