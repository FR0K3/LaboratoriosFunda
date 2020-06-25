#include <iostream>

using namespace std;

int main(void){
    int longitud;
    int numero;
    int cont = 0;
    cout << endl << "CONTAR LAS VECES QUE SE ENCUENTRA UN NUMERO EN ARRAY" << endl << endl;
    cout << "Ingresa un numero cualquiera: ";
    cin >> numero;
    cout << "Ingresa la longitud del arreglo: ";
    cin >> longitud;
    cout << endl;
    int array[longitud];

    for(int i = 0;i < longitud;i++){
        cout << "Ingrese los valores del arreglo: ";
        cin >> array[i];
    }

    for(int i = 0;i<longitud;i++){
        if(numero == array[i]){
            cont++;
        }
    }

    cout << "El numero " << numero << " se repite " << cont << " veces";
    
    return 0;
}