#include <iostream>

using namespace std;

double promedioA(double altura[]){
    double suma = 0;
    for(int i = 0; i < 25; i++){
        suma += altura[i];
    }
    double promedio = (suma/25);
    return promedio;
}

void comparacion(double media, double altura[]){
    int arribaM = 0;
    int abajoM = 0;
    int igualM = 0;
    for(int i = 0; i < 25;i++){
        if(altura[i] > media){
            arribaM++;
        } else if(altura[i] == media){
            igualM++;
        } else{
            abajoM++;
        }
    }
    cout << endl << "La media de la altura de los estudiantes es: " << media << endl;
    cout << "Los estudiantes con altura arriba de la media son: " << arribaM << endl;
    cout << "Los estudiantes con la misma altura que la media son: " << igualM << endl;
    cout << "Los estudiantes con altura abajo de la media son: " << abajoM;
}

int main(void){
    double alturas[25];
    cout << endl << "CALCULO DE LA ESTATURA DE LOS ESTUDIANTES" << endl << endl;
    cout << "Ingrese las alturas de los 25 estudiantes en centimetros: " << endl;
    for(int i = 0; i < 25; i++){
        cin >> alturas[i];
    }
    
    comparacion(promedioA(alturas), alturas);
    
    return 0;
}