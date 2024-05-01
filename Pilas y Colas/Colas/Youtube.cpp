#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<string> colaReproduccion;
    string cancion;
    int opcion;


    while(true){

        cout << "Bienvenido al sistema de me gusta de YT" << endl;
        cout << "1. para registra una cancion" << endl;
        cout << "2. para ver la lista de canciones" << endl;
        cout << "0. para salir" << endl;
        cin >> opcion;

        if(opcion == 1){
            cout << "Ingrese el nombre de la cancion:" << endl;
            cin >> cancion;
            colaReproduccion.push(cancion);
        }
        else if(opcion == 2){
            
            while(!colaReproduccion.empty()){
                cout << colaReproduccion.front() << endl;
                colaReproduccion.pop();
            }
            if(colaReproduccion.empty()){
                cout << "No hay canciones registradas" << endl;
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