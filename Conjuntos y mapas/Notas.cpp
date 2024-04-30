#include <iostream>
#include <map>

using namespace std;

int main(){

    map <string, map<string, float>> notas;

    string nombre, asignatura;
    float nota;
    int opcion;

    
    while(nombre != "fin"){
        cout << "Ingrese el nombre del estudiante:  (fin para salir) ";
        cin >> nombre;
        cout << "Ingrese la asignatura: ";
        cin >> asignatura;
        cout << "Ingrese la nota: ";
        cin >> nota;

        if (nombre != "fin")
        {
            notas[nombre].insert(pair<string, float>(asignatura, nota));
        }
    
    }

    while(true){

        cout << "1. para ver las notas de un estudiante" << endl;
        cout << "2. para el promedio de un estudiante" << endl;
        cout << "3. para ver el promedio de una asignatura" << endl;
        cout << "4. para salir" << endl;
        cin >> opcion;

        if(opcion == 1){

        }
        else if(opcion == 2){

        }
        else if(opcion == 3){

        }
        else if (opcion == 4){
            break;
        }
        else{
            cout << "Opcion invalida" << endl;
        }




    }


}