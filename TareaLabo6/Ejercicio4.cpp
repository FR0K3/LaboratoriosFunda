#include <iostream>

using namespace std;

void lecturaArray(int arreglo[], int x){
    for(int i = 0; i < x; i++){
        cin >> arreglo[i];
    }
    cout << "Has terminado de llenar el arreglo" << endl << endl;
}

void sumaArrays(int arreglo[], int arreglo2[], int x, int resultado[]){
    for(int i = 0; i < x; i++){
        resultado[i] = arreglo[i] + arreglo2[i];
    }
}

void desplegarResultado(int resul[], int longi){
    for(int i = 0; i < longi; i++){
        cout << "El contenido de arreglo[" << i << "] es: " << resul[i] <<endl;        
    }
}



int main(void){
    int x = 0;
    cout << endl << "SUMA DE DOS ARREGLOS" << endl;
    cout << endl  << "Ingrese la longitud que quiere que tenga los dos arreglos: ";
    cin >> x;
    int array[x];
    int array2[x];
    int resultado[x];
    int acum = 0;
    
    cout << "Ingrese los valores del arreglo 1: ";
    lecturaArray(array, x);
    cout << "Ingrese los valores del arreglo 2: ";
    lecturaArray(array2, x);
    sumaArrays(array, array2, x, resultado);

    cout << endl;
    cout << "El tercer arreglo es la suma de cada uno de los elementos de los arreglos anteriores en la misma posicion: " <<endl;
    desplegarResultado(resultado, x);



    
    return 0;
}