#include <iostream>

using namespace std;

int main(){
    cout << endl;
    cout << "----VERIFICACIÓN SI PRIMERA Y SEGUNDA LETRA DE UNA PALABRA SON LAS MISMAS----" << endl;
    string palabra;
    cout << "Escribe una palabra en para verificar:" << endl;
    cin >> palabra;
    int longi = palabra.length() - 1;
    char let1 = palabra.at(0);
    char let2 = palabra.at(longi);
    cout << endl ;
    // cout << let1 << endl <<let2;

    if(let1 == let2){
        cout << "La palabra " << palabra << " inicia y termina con la misma letra" << endl;
        cout << "La letra con la que empieza y termina es: " << let1; 
    } else{
        cout << "La palabra " << palabra << " inicia y termina con diferentes letras" << endl;
        cout << "La letra con la que inicia la palabra es \"" << let1 << "\" y con la que termina es \"" << let2 << "\"";
    }
}