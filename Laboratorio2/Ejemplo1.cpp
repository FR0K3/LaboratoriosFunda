#include <iostream>

using namespace std;

int main(){
    int n1, n2;
    cout << "Ingrese el primer numero:";
    cin >> n1;
    cout << "Ingrese el segundo numero:";
    cin >> n2;

    if (n1 > n2){
        cout << n1 << " es mayor que " << n2;
    }
    else if(n1 < n2) {
        cout << n1 << " es menor que " << n2;
    } else{
        cout << n1 << " es igual a " << n2;
    }
    

}