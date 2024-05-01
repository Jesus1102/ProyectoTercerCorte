#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<string> turnos;
    string nombre;
    int turno = 1, opcion, tiempo = 5;

    while(true){

        cout << "Bienvenido al sistema de turnos de la boleteria" << endl;
        cout << "1. para registra un turno" << endl;
        cout << "2. para ver la lista de turnos" << endl;
        cout << "0. para salir" << endl;

        cin >> opcion;
        if(opcion == 1){
            cout << "Ingrese su nombre: (0. para salir)" << endl;
            if(nombre == "0"){
                break;
            }
            cout << "su turno es el: " << turno << "El tiempo en cola es de: "<< tiempo << "minutos" << endl;
            turnos.push(nombre + "  "+ to_string(turno) + " " + to_string(tiempo) + "minutos");
            turno++;
            tiempo += 5;
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
    return 0;
}