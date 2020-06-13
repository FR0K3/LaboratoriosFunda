#include <iostream>

using namespace std;

int MCD(int a, int b){
    int mcd = 0;
    int n_mayor = 0;
    int n_menor = 0;
    int residuo = 0;

    if(a > b){
        n_mayor = a;
        n_menor = b;
    } else{
        n_mayor = b;
        n_menor = a;
    }

    //cout << n_menor << " " << n_mayor;

    residuo = n_mayor % n_menor;
    while (residuo != 0){
        residuo = n_mayor % n_menor;
        if (residuo != 0){
            n_mayor = n_menor;
            n_menor = residuo;
        }
    }

    mcd = n_menor;
    return mcd;
}


int main(void){
    int num1, num2;
    cout << endl << "**OBTENER EL MCD DE DOS NUMEROS**" << endl << endl;
    cout << "Ingresa el primer número: "; 
    cin >> num1;
    cout << "Ingresa el segundo número: "; 
    cin >> num2;
    cout << "El MCD de los números ingresados es: " << MCD(num1, num2);
}