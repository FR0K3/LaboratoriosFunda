#include <iostream>

using namespace std;

int main(void){
    string prd;
    float precio;
    int cant;

    cout << "Ingrese el nombre del producto:" << endl;
    cin >> prd;
    cout << "Ingrese el precio del producto:" << endl;
    cin >> precio;
    cout << "Ingrese la cantidad de producto que lleva:" << endl;
    cin >> cant;

    cout << "El producto que ha comprado es: " << prd << endl;
    cout << "El precio del producto que ha comprado es: " << precio << endl;
    cout << "La cantidad del producto que lleva es: " << cant << endl;
    cout << "Total: $" << precio * cant;


}