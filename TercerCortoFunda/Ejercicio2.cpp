#include <iostream>

using namespace std;

void adivinarNum(int n, int n1){
    int intentos = 5;
    do{
        /*PRIMER INTENTO DE ADIVINAR EL NUMERO*/
        if(intentos == 5){
            if(n == n1){
                cout << "Usted ha adivinado el numero secreto, el cual es: " << n;
                intentos = 0;         
            } else{
                intentos--; //se resta un intento
                if(n > n1){
                    cout << "El número ingresado es mayor que el número secreto, le quedan " << intentos << " intentos" << endl;                            
                } else{
                    cout << "El número ingresado es menor que el número secreto, le quedan " << intentos << " intentos" << endl;
                }
            }
        }

        /*INTENTOS RESTANTES PARA ADIVINAR EL NUMERO*/
        if(intentos < 5 && intentos > 0){ //Evaluar si todavia tiene intentos el usuario
            cout << "Intente con otro numero por favor:";
            cin >> n;
            if(n==n1){
                cout << "Usted ha adivinado el numero secreto, el cual es: " << n1;
                intentos = 0; //si adivina los intentos seran igual a cero para que termine el bucle     
            } else{
                intentos--;
                if(n > n1){ //evaluar si el numero ingresado es mayor o menor al numero a evaluar para dar una pista
                    cout << "El número ingresado es mayor que el número secreto, le quedan " << intentos << " intentos" << endl;                            
                } else{
                    cout << "El número ingresado es menor que el número secreto, le quedan " << intentos << " intentos" << endl;
                }
            }
        } else{
            cout << "Usted no ha adivinado el numero secreto";
        }
    } while(intentos > 0);
    
    

}

int main(){
    int num = 0; //numero que el usuario ingresará
    int num1 = 11; //numero a adivinar
    cout << endl << "EL NUMERO MAGICO" << endl << endl;
    cout << "Adivine el numero secreto que la computadora tiene guardado, su rango es de 1 a 100. Solo cuenta con 5 intentos: ";
    cin >> num;
    adivinarNum(num, num1);
}