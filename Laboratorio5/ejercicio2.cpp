#include <iostream>

using namespace std;

int darleVuelta(int num){
    int acum = 0;

    while(num>0){
        acum = acum*10 + num%10;
        num = num/10; 
    }
    return acum;
}


int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << darleVuelta(n); 

}