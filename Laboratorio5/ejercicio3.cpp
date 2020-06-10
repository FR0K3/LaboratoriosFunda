#include <iostream>

using namespace std;

int contadorVocales(int acum){
    char letra;
    bool cont = true;
    while(cont == true){
        cout << "Ingresa un caracter y si quieres terminar presiona 0:";
        cin >> letra;
        if (letra=='a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
            acum++;
        } else if(letra == '0'){
            cont = false;
        }
    }
    return acum;
}

int main(){
    int acum = 0;
    cout << contadorVocales(acum);

}