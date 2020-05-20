#include <iostream>

using namespace std;

int main(){
    int num;

    cout << endl;
    cout << "---- Verificación número positivo, negativo o cero ----" << endl << endl;
    cout << "Ingrese el número a verificar: " << endl;
    cin >> num;

    if (num < 0){
        cout << "El número " << num << " es negativo";
    }
    else if (num == 0){
        cout << "El número es " << num;
    }
    else{
        cout << "El número es positivo";
    }
    



}