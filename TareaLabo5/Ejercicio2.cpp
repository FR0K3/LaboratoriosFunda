#include <iostream>

using namespace std;

void horaActual(int h, int m, int s){
    if(h < 10){
        cout << "0";
    }
    cout << h << ":";
    
    if(m < 10){
        cout << "0";
    }
    cout << m << ":";
    
    if(s < 10){
        cout << "0"; 
    }
    cout << s;
}

void horaSegundo(int h, int m, int s){
    s+=1;
    if(s>59){
        s = 0; 
        m+=1;

        if(m > 59){
            m = 0;
            h+=1;
        
            if(h > 24){
                s = 0;
                m = 0;
                h = 1;
            }
        }
    }
    
    if(h < 10){
        cout << "0";
    }
    cout << h << ":";
    
    if(m < 10){
        cout << "0";
    }
    cout << m << ":";
    
    if(s < 10){
        cout << "0"; 
    }
    cout << s;
}

int main(){
    int hora, min, seg;
    cout << endl << "SUMA DE UN SEGUNDO A LA HORA" << endl << endl;
    cout << "Ingrese la hora en formato de 24 horas: ";
    cin >> hora;
    cout << "Ingrese los minutos: ";
    cin >> min;
    cout << "Ingrese lo segundos: ";
    cin >> seg;

    while(!(hora <= 24 && hora > 0 && min < 60 && min > 0 && seg < 60 && seg > 0)){
        if(!(hora <= 24 && hora > 0)){
            cout << "Ingresa una hora valida por favor: ";
            cin >> hora;
        }

        if(!(min < 60 && min > 0)){
            cout << "Ingresa los minutos de manera correcta por favor: ";
            cin >> min;
        }

        if(!(seg < 60 && seg > 0)){
            cout << "Ingresa los segundos de manera correcta por favor: ";
            cin >> seg;
        }
    }
    
    cout << endl << "La hora actual es: ";
    horaActual(hora, min, seg);
    cout << endl << "La hora mas un segundo es: ";
    horaSegundo(hora, min, seg);
}