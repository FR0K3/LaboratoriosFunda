#include <iostream>

using namespace std;

int main(){
    int factorial = 1, n;
    
    do {
        cout << "Ingresa un numero:";
        cin >> n;
    } while (n<=0);
    
    for (int i = 1; i <= n; i++){
        factorial*=i;
    }
    cout << "El factorial de n es: " << factorial << endl;
    

        
    
    

    
    return 0;
}