#include <iostream>

using namespace std;

int main(){
    int num1;
    int num2;
    int num3;

    cout << "Ingrese el primer número" << endl;
    cin >> num1;
    cout << "Ingrese el segundo número" << endl;
    cin >> num2;
    cout << "Ingrese el tercer número" << endl;
    cin >> num3;
    cout << endl << endl;
    int promedio = (num1 + num2 + num3)/(3);
    cout << "El promedio de los tres números es: " << promedio << endl;

    return 0;
}