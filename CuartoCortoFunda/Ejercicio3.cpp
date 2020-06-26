#include <iostream>

using namespace std;

void leerArray(double notas[]){
    for (int i = 0; i < 5; i++){
        cin >> notas[i];
    }
}

void notaF(double notas[]){
    double promedio = 0;
    for(int i = 0; i < 5; i++){
        promedio += (notas[i] * 0.20);
    }

    if(promedio >= 6){
        cout << "El estudiante ha aprobado con un promedio de: " << promedio << endl;
    } else{
        cout << "El estudiante ha reprobado con un promedio de: " << promedio << endl;
    }
}

int main(void){
    int n = 0;
    double notas[5];
    cout << endl << "NOTAS ESTUDIANTES" << endl << endl;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;

    for(int i = 1; i <= n;i++){
        cout << endl << "Ingrese las notas del estudiante " << i << ":" << endl;
        leerArray(notas);
        notaF(notas);
    }
        

    return 0;
}