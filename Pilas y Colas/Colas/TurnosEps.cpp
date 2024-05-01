#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<string> turnos;
    int turno = 1, cedula, opcion;


    while(true){

        cout << "Bienvenido al sistema de turno de la EPS" << endl;
        cout << "1. para registra un turno" << endl;
        cout << "2. para ver la lista de turnos" << endl;
        cout << "0. para salir" << endl;

        cin >> opcion;
        if(opcion == 1){
            cout << "Ingrese su cedula: (0. para salir)" << endl;
            cin >> cedula;

            if(cedula == 0){
                break;
            }
            cout << "su turno es el: " << turno << endl;
            turno++;
            turnos.push(to_string(cedula) + " " + to_string(turno));
        }
        else if(opcion == 2){
            while(!turnos.empty()){
                cout << turnos.front() << endl;
                turnos.pop();
            }
            if(turnos.empty()){
                cout << "No hay turnos registrados" << endl;
            }
        }
        else if(opcion == 0){
            break;
        }
        
        else{
            cout << "Opcion invalida" << endl;
        }


    }
}