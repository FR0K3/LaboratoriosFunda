#include <iostream>

using namespace std;

double calculoSalario(int h1, int h2){
    int h_mes = 0;
    int hex_mes = 0;
    h_mes = h1;
    hex_mes = h2;
    double sal_tot = ((h_mes * 1.75) + (hex_mes * 2.50));
    double sal_real = 0;
    
    if(sal_tot >= 500){
        sal_real = (sal_tot)-(sal_tot*0.04)-(sal_tot*0.0625)-(sal_tot*0.10);
    } else{
        sal_real = (sal_tot) - (sal_tot*0.04) - (sal_tot*0.0625);
    }
    return sal_real;
}


int main(){
    int h_trab = 0;
    int h_extra = 0;
    float salario_t = 0;
    float salario_r = 0;
    cout << endl << "La empresa 'T3RA' tiene un número de  4 empleados los cuales son: " << endl;
    cout << "1. Fernando Rodríguez." << endl;
    cout << "2. Edgardo Ramírez." << endl;
    cout << "3. Rebeca Juárez." << endl;
    cout << "4. Fátima Aparicio." << endl;
    cout << endl << endl;
    
   for(int acum = 1; acum <= 4; acum++){
        cout << "Ingrese el numero de horas trabajados al mes del empleado " << acum << ": ";
        cin >> h_trab;
        cout << "Ingrese el numero de horas extras trabajadas al mes del empleado "<< acum << ": ";
        cin >> h_extra;
        cout << "El salario real del empleado " << acum << " es: $" << calculoSalario(h_trab, h_extra) << endl << endl;
    }

    return 0;
}