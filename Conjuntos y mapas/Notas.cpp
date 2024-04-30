#include <iostream>
#include <map>

using namespace std;

int main(){

    map <string, map<string, float>> notas;

    string nombre, asignatura;
    float nota;

    
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




}