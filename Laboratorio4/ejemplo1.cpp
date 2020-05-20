#include <iostream>

using namespace std;

int main(){
    int n;


    while (n!=0){
        cout << "Ingrese un numero:";
        cin >> n;
        if (n%2==0){
            cout << "El numero es par" << endl;
        } else{
            cout << "El numero es impar" << endl;            
        }
    }
    cout << "Ingresaste el 0";
    
}