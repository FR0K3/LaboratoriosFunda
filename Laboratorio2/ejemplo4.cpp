#include <iostream>

using namespace std;

int main(){
    int x;
    string respuesta;
    cout << "Ingrese un numero por favor:";
    cin >> x;

    respuesta = (x >= 0)? " numero es positivo" : " numero es negativo";

    cout << x << " es" << respuesta; 
    
    return 0;
}