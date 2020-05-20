#include <iostream>

using namespace std;

int main(void){
    int a;
    int b;
    int residuo;
    cout << endl;
    cout << "Verificación si dos numeros son divisibles entre ellos" << endl << endl;
    cout << "Ingresa el número a dividir: " << endl;
    cin >> a;
    cout << "Ingresa el número por el cual se dividirá el anterior:" << endl;
    cin >> b;
    residuo = a % b;
    
    if(residuo==0){
        cout << "El número " << a << " es divisible entre " << b;
    } else{
        cout << "Estos números no son divisibles entre ellos";
    }
    return 0;
}