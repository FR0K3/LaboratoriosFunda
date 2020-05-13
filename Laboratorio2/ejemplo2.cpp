#include <iostream>

using namespace std;

int main(){
    int num1;
    int num2;
    int num3;

    cout << "Ingrese num1: " << endl;
    cin >> num1;
    cout << "Ingrese num2: " << endl;
    cin >> num2;
    cout << "Ingrese num3: " << endl;
    cin >> num3;
    cout << endl << endl;

    int promedio = (num1 + num2 + num3) / (3);
    if (promedio < 6) {
        cout << "Reprobaste";
    }
    else {
        cout << "Materia aprobada con: " << promedio;
    }
    
    // cout << "El promedio de los tres números es: " << promedio << endl;
    return 0;
}