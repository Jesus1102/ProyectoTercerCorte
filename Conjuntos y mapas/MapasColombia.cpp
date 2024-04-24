#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){

    map<string, map<string, string>> departamentos;
    departamentos["Amazonas"].insert(pair<string, string>("Leticia", "Caluroso"));
    departamentos["Antioquia"].insert(pair<string, string>("Medellín", "Moderado"));
    departamentos["Arauca"].insert(pair<string, string>("Arauca", "Caluroso"));
    departamentos["Atlántico"].insert(pair<string, string>("Barranquilla", "Caluroso"));
    departamentos["Bolívar"].insert(pair<string, string>("Cartagena", "Caluroso"));
    departamentos["Boyacá"].insert(pair<string, string>("Tunja", "Frío"));
    departamentos["Caldas"].insert(pair<string, string>("Manizales", "Moderado"));
    departamentos["Caquetá"].insert(pair<string, string>("Florencia", "Caluroso"));
    departamentos["Casanare"].insert(pair<string, string>("Yopal", "Caluroso"));
    departamentos["Cauca"].insert(pair<string, string>("Popayán", "Moderado"));
    departamentos["Cesar"].insert(pair<string, string>("Valledupar", "Caluroso"));
    departamentos["Chocó"].insert(pair<string, string>("Quibdó", "Caluroso"));
    departamentos["Córdoba"].insert(pair<string, string>("Montería", "Caluroso"));
    departamentos["Cundinamarca"].insert(pair<string, string>("Bogotá", "Frío"));
    departamentos["Guainía"].insert(pair<string, string>("Inírida", "Caluroso"));
    departamentos["Guaviare"].insert(pair<string, string>("San José del Guaviare", "Caluroso"));
    departamentos["Huila"].insert(pair<string, string>("Neiva", "Caluroso"));
    departamentos["La Guajira"].insert(pair<string, string>("Riohacha", "Caluroso"));
    departamentos["Magdalena"].insert(pair<string, string>("Santa Marta", "Caluroso"));
    departamentos["Meta"].insert(pair<string, string>("Villavicencio", "Caluroso"));
    departamentos["Nariño"].insert(pair<string, string>("Pasto", "Moderado"));
    departamentos["Norte de Santander"].insert(pair<string, string>("Cúcuta", "Caluroso"));
    departamentos["Putumayo"].insert(pair<string, string>("Mocoa", "Caluroso"));
    departamentos["Quindío"].insert(pair<string, string>("Armenia", "Moderado"));
    departamentos["Risaralda"].insert(pair<string, string>("Pereira", "Moderado"));
    departamentos["San Andrés y Providencia"].insert(pair<string, string>("San Andrés", "Caluroso"));
    departamentos["Santander"].insert(pair<string, string>("Bucaramanga", "Moderado"));
    departamentos["Sucre"].insert(pair<string, string>("Sincelejo", "Caluroso"));
    departamentos["Tolima"].insert(pair<string, string>("Ibagué", "Caluroso"));
    departamentos["Valle del Cauca"].insert(pair<string, string>("Cali", "Caluroso"));
    departamentos["Vaupés"].insert(pair<string, string>("Mitú", "Caluroso"));
    departamentos["Vichada"].insert(pair<string, string>("Puerto Carreño", "Caluroso"));


    string departamento, clima;
    vector <string> ciudades;

    cout << "Ingrese el departamento: ";
    cin >> departamento;
    auto it = departamentos.find(departamento);
    if(it != departamentos.end()){
        cout << "Capital: " << it->second.begin()->first << endl;
        cout << "Clima: " << it->second.begin()->second << endl;

    }
    else{
        cout << "Departamento no encontrado" << endl;
    }

    cout << "Ingrese el clima que desea buscar: ";
    cin >> clima;
    for (const auto& departamento : departamentos) {
        for (const auto& ciudad_clima : departamento.second) {
            if (ciudad_clima.second == clima) {
                ciudades.push_back(ciudad_clima.first);
            }
        }
    }

    cout << "Las ciudades con clima " << clima << " son:\n";
    for (const auto& ciudad : ciudades) {
        cout << ciudad << "\n";
    }
    return 0;
}





