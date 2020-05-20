#include "iostream"

using namespace std;

int main(){
    int x;
    cout << endl;
    cout << "-----Número Par e Impar-----" << endl << endl;
    cout << "Ingrese un número para verificar si es par o impar: " << endl;
    cin >> x;

    if(x%2==0){
        cout << "El número " << x << " es par";
    } else if(x==0){
        cout << "El número es " << x; 
    } else{
        cout << "El número " << x << " es impar";
    }
    return 0;
}