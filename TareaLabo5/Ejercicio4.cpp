#include <iostream>

using namespace std;

bool aBisiesto(int a){
    if(a % 400 == 0){
        return true;
    } else{
        if((a % 4 == 0) && (a % 100 != 0)){
            return true;
        } else{
            return false;
        }
    }
}

// void fechaI(int d, int m, int y){
//     if(d < 10){
//         cout << "0";
//     }
//     cout << d << "/";
//     if(m < 10){
//         cout << "0";
//     }
//     cout << m << "/" << y;
// }

int main(void){
    int dia, mes, year;
    cout << endl << "FECHA CON UN DIA MAS" << endl<< endl;
    cout << "Ingresa el dia: ";
    cin >> dia;
    cout << "Ingresa el mes: ";
    cin >> mes;
    cout << "Ingresa el año: ";
    cin >> year;
    
    while(!(mes <= 12 && mes > 0)){
        cout << "Ingresa un mes valido: ";
        cin >> mes;
    }

    switch(mes){
        case 2:
            if(aBisiesto(year)){
                while(dia > 29 || dia < 0){
                    cout << "Ingresa un dia valido: ";
                    cin >> dia;
                }
                dia++;
                if(dia>29){
                    dia = 1;
                    mes++;
                }
            } else{
                while(dia > 28 || dia < 0){
                    cout << "Ingresa un dia valido: ";
                    cin >> dia;
                }
                dia++;
                if(dia > 28){
                    dia = 1;
                    mes++;
                }
            }
            break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            while(dia > 31 || dia < 0){
                cout << "Ingresa un dia valido: "; 
                cin >> dia;
            }
            dia++;
            if(dia > 31){
                mes++;
                dia = 1;
                if(mes > 12){
                    year++;
                    dia = 1;
                    mes = 1;
                }
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            while(dia > 30 || dia < 0){
                cout << "Ingresa un dia valido: "; 
                cin >> dia;
            }
            dia++;
            if(dia > 30){
                mes++;
                dia = 1;
            }
            break;
    }
    
    cout << "La fecha mas un dia es: ";
    if(dia < 10){
        cout << "0";
    }
    cout << dia << "/";
    if(mes < 10){
        cout << "0";
    }
    cout << mes << "/" << year;


}