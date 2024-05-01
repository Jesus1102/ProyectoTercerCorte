#include <iostream>
#include <stack>

using namespace std;


int maint(){

    stack<string> Mercado;
    int opcion;

    while(true){

        string producto;
        cout << "Ingrese el producto que desea comprar: (0. para salir) " << endl;
        cin >> producto;
        if(producto == "0"){
            break;
        }
        else{
            Mercado.push(producto);
        }

    }

    while(!Mercado.empty()){

        cout << "Producto: " << Mercado.top() << endl;
        cout << "Lo ha comprado 1. si / 2. no" << endl;
        cin >> opcion;
        if(opcion == 1){
            Mercado.pop();
        }
        else if(opcion == 2){
            cout << "Compra el producto para pasar la siguiente en la lista" << endl;
        }
        else{
            cout << "Opcion invalida" << endl;
        }
    }



    return 0;
}