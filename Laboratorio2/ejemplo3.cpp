#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Evaluar si un numero es par o impar" << endl << endl;
    cout << "Ingrese el numeor para evaluarlo: ";
    cin >> a;

    if(a % 2 == 0){
        cout << a << " es un numero par";
    } else{
        cout << a << " es un numero impar";
    }
}