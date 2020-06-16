#include <iostream>

using namespace std;

bool aBisiesto(int a){
    if(a % 400 == 0){
        return true;
    } else{
        if((a % 4 == 0) && (a % 100 != 0)){
            return true;
        } else{
            return false;
        }
    }
}

int main(){
    int year;
    cout << endl;
    cout << "COMPROBACION AÑO BISIESTO" << endl << endl;
    cout << "Ingrese el año para verificar si es bisiesto o no: ";
    cin >> year;

    if(!(aBisiesto(year)==false)){
        cout << "El año " << year << " es bisiesto.";
    } else{
        cout << "El año " << year << " no es bisiesto.";
    }

}