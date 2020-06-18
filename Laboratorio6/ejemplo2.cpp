#include <iostream>

using namespace std;

float promedio(int arreglo[], int n){
    float suma=0;

    for(int i = 0; i<n; i++){
        suma += arreglo[i];
    }

    float promedio = suma/n;     
    return promedio;

}

int main(){
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    int array[n];

    for(int i=0; i<n; i++){
        cout << "Ingrese sus notas:";
        cin >> array[i];
    }

    cout << "Su promedio es: " << promedio(array, n);

}