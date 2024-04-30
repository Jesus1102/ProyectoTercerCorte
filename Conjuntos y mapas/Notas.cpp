#include <iostream>
#include <map>

using namespace std;

int main(){

    map <string, map<string, float>> notas;

    string nombre, asignatura;
    float nota;
    int opcion;

    while(true){
        cout << "1. para registrar estudiantes " << endl;
        cout << "2. para ver las notas de un estudiante en una asignatura" << endl;
        cout << "3. para el promedio de un estudiante" << endl;
        cout << "4. para ver el promedio de una asignatura" << endl;
        cout << "5. para salir" << endl;
        cin >> opcion;
        if(opcion == 1){
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
        if(opcion == 2){
            cout << "Ingrese el nombre del estudiante: ";
            cin >> nombre;
            cout << "Ingrese la asignatura: ";
            cin >> asignatura;

            auto it = notas.find(nombre);
            if(it != notas.end()){
                auto it2 = it->second.find(asignatura);
                if(it2 != it->second.end()){
                    cout << "La nota de " << nombre << " en " << asignatura << " es " << it2->second << endl;
                }
                else{
                    cout << "Asignatura no encontrada" << endl;
                }
            }
            else{
                cout << "Estdudiante no encontrado" << endl;
            } 
        }
        else if(opcion == 3){

        }
        else if(opcion == 4){

        }
        else if(opcion == 5){
            break;
        }
        else{
            cout << "Opcion invalida" << endl;
        }




    }


}