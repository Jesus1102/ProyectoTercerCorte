#include <iostream>
#include <map>
using namespace std;

string capital();
string clima();

int main(){

    map<string, string> departamentos;
    departamentos["Amazonas"]="Leticia";
    departamentos["Antioquia"]="Medellín";
    departamentos["Arauca"]="Arauca";
    departamentos["Atlántico"]="Barranquilla";
    departamentos["Bolívar"]="Cartagena";
    departamentos["Boyacá"]="Tunja";
    departamentos["Caldas"]="Manizales";
    departamentos["Caquetá"]="Florencia";
    departamentos["Casanare"]="Yopal";
    departamentos["Cauca"]="Popayán";
    departamentos["Cesar"]="Valledupar";
    departamentos["Chocó"]="Quibdó";
    departamentos["Córdoba"]="Montería";
    departamentos["Cundinamarca"]="Bogotá";
    departamentos["Guainía"]="Inírida";
    departamentos["Guaviare"]="San José del Guaviare";
    departamentos["Huila"]="Neiva";
    departamentos["La Guajira"]="Riohacha";
    departamentos["Magdalena"]="Santa Marta";
    departamentos["Meta"]="Villavicencio";
    departamentos["Nariño"]="Pasto";
    departamentos["Norte de Santander"]="Cúcuta";
    departamentos["Putumayo"]="Mocoa";
    departamentos["Quindío"]="Armenia";
    departamentos["Risaralda"]="Pereira";
    departamentos["San Andrés y Providencia"]="San Andrés";
    departamentos["Santander"]="Bucaramanga";
    departamentos["Sucre"]="Sincelejo";
    departamentos["Tolima"]="Ibagué";
    departamentos["Valle del Cauca"]="Cali";
    departamentos["Vaupés"]="Mitú";
    departamentos["Vichada"]="Puerto Carreño";

    for (const auto& par:departamentos)
    {
        string clave = par.first;
        string valor = par.second;
        cout<<"Departamento:"<<clave<<" Capital:"<<valor<<endl;
    }


    return 0;
}


string capital(map <string, string> departamentos){ 

    string departamento;
    cout<<"Ingrese el nombre del departamento: ";
    cin>>departamento;

    auto it=departamentos.find(departamento);

    if (it!=departamentos.end())
    {
        cout << "La capital de "<<departamento<<" es "<<departamentos[departamento];
    }else{
        cout << "No se encontró el departamento "<<departamento;
    }



}

