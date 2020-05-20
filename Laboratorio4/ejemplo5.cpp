#include <iostream>

using namespace std;

int main(){
    int acumulador = 0;
    int n;
    cout << "Ingresa un numero:";
    cin >> n;
    for (int i = 0; i <= n; i++){
        if (i % 2 == 0){
            acumulador += i;
        }
    }
    cout << "La suma de los numeros pares es: " << acumulador;

}