#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(){

    queue <string> impresiones;
    stack <string> impresionesHechas;
    string impresion;
    int opcion;


    while(true){

        cout << "Bienvenido a la impresora" << endl;
        cout << "1. para agregar una impresion" << endl;
        cout << "2. para imprimir" << endl;
        cout << "3. para ver las impresiones hechas" << endl;
        cout << "0. para salir" << endl;
        cin >> opcion;

        if(opcion == 1){

            cout << "Ingrese el archivo a imprimir:" << endl;
            cin >> impresion;
            cout << "Impresion agregada" << endl;
            impresiones.push(impresion);
        }
        else if(opcion == 2){

            string aux;
            cout << "Ingrese hasta que archivo desea imprimir:" << endl;
            cin >> aux;
            while (!impresiones.empty() && impresiones.front() != aux)
            {
                cout << "Imprimiendo: " << impresiones.front() << endl;
                impresionesHechas.push(impresiones.front());
                impresiones.pop();
            }
            if(impresiones.empty()){
                cout << "No hay impresiones" << endl;
            }
        }
        else if(opcion == 3){
            
            cout << "Impresiones hechas de las mas reciente a la mas antigua:" << endl;
            while(!impresionesHechas.empty()){
                cout << impresionesHechas.top() << endl;
                impresionesHechas.pop();
            }
            if(impresionesHechas.empty()){
                cout << "No hay impresiones hechas" << endl;
            }

        }
        else if(opcion == 0){
            cout << "Saliendo..." << endl;
            break;
        }
        else{
            cout << "Ingrese una opcion valida" << endl;
        }

    }

    return 0;
}