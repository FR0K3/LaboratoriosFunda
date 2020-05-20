#include <iostream>
#include <math.h>

using namespace std;

int main(void){
    float radio;
    float pi = 3.14159265358979323846;

    cout << "Ingresa el radio del circulo del cual quieres calcular el area y perimetro:" << endl;
    cin >> radio;
    float area = pi * pow(radio, 2);
    float perimetro = 2 * pi * radio;
    cout << "El perimetro del circulo es: " << perimetro << endl << "El area del circulo es: " << area;
}