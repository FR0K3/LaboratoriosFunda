#include <iostream>

using namespace std;

int main(){
    int x;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> x;
    int arreglo[x];

    for(int i=0; i < x; i++){
        cout << "Ingrese un valor: ";
        cin >> arreglo[i];
    }

    cout << "Arreglo[";
    for (int i = 0; i < x; i++){
        cout << arreglo[i]<< " ";
    }
    cout << "]";

    return 0;
    

}