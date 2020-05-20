#include <iostream>
//#include <string.h>

using namespace std;

int main(){
    string palabraxd;
    int longitud;
    cout << endl;
    cout << "----PALABRA MAYOR A 10 CARACTERES----" << endl << endl;
    cout << "Ingrese una sola palabra: ";
    cin >> palabraxd;
    longitud = palabraxd.length();
    //cout << longitud;

    cout << "La palabra tiene " << longitud << " caracteres" << endl << endl;
    if (longitud >= 10){
        cout << "La palabra ingresada tiene mas o 10 caracteres ";
        if(longitud%2 == 0){
            cout << "y la cantidad de caracteres es par";
        }else{
            cout << "y la cantidad de caracteres es impar";
        }
    }
    else
    {
        cout << "La palabra ingresada tiene menos de 10 caracteres ";
        if(longitud%2 == 0){
            cout << "y la cantidad de caracteres es par";
        }else{
            cout << "y la cantidad de caracteres es impar";
        }
    }
    
}