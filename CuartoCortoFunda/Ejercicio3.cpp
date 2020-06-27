#include <iostream>

using namespace std;

void leerMatriz(double matriz[][5], int estud){
    for(int i = 0; i < estud;i++){
        cout << "Ingrese las notas del estudiante " << i+1 << ":" << endl;
        for (int j = 0; j < 5; j++){
            cin >> matriz[i][j];
        }
        cout << endl;
    }
}

void notaF(double nota[][5], int estud){
    double promedio;
    for(int i = 0; i < estud;i++){
        promedio = 0;
        for (int j = 0; j < 5; j++){
            promedio += (nota[i][j] * 0.20);
        }
        if(promedio >= 6){
            cout << "El estudiante " << i+1 << " aprobo con un promedio de: " << promedio << endl;
        } else{
            cout << "El estudiante " << i+1 << " reprobo con un promedio de: " << promedio << endl;
        }
    }
}

int main(){
    int estud = 0;
    cout << endl << "NOTAS ESTUDIANTES" << endl << endl;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> estud;
    double notas[estud][5] = {0};

    leerMatriz(notas, estud);

    notaF(notas, estud);

    return 0;
}