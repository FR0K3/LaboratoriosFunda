#include <iostream>

using namespace std;

int main(void){
    int uni, dec, cen, mil, n;

    cout << endl << "---DECOMPOSICION---" << endl << endl;
    cout << "Ingrese un numero: " << endl;
    cin >> n;

    uni = n/1;
    dec = n/10;
    cen = n/100;
    mil = n/1000;

    cout << "El numero " << n << " tiene: " << endl;
    cout << uni << " unidades" << endl;
    cout << dec << " decenas" << endl;
    cout << cen << " centenas" << endl;
    cout << mil << " millares" << endl;
    return 0;
}
