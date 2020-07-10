#include <iostream>

using namespace std;

const int longCad = 20;

struct costoPorArticulo{
    char nombreArticulo[longCad+1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

void leerArticulo(costoPorArticulo listaProductos[], int cantidadArticulos){
    costoPorArticulo producto;
    for(int i = 0; i < cantidadArticulos; i++){
        cout << endl << "Producto numero " << i+1 << endl;
        cout << "Ingrese el nombre del articulo: ";
        cin >> producto.nombreArticulo;
        cout << "Ingrese la cantidad que lleva de dicho articulo: ";
        cin >> producto.cantidad;
        cout << "Ingrese el precio de dicho articulo en dolares: ";
        cin >> producto.precio;
        listaProductos[i] = producto;
        cout << endl;
    }
}

void costoTotalArticulo(costoPorArticulo listaProductos[], int cantidadArticulos){
    for(int i = 0; i < cantidadArticulos; i++){
        float precioTotalArticulo = listaProductos[i].cantidad * listaProductos[i].precio;
        listaProductos[i].costoPorArticulo = precioTotalArticulo;
    }
}

void mostrarProductos(costoPorArticulo listaProductos[], int cantidadArticulos){
    cout << endl << "LISTA DE PRODUCTOS" << endl;
    for(int i = 0; i < cantidadArticulos; i++){
        cout << "El producto " << i+1 << " es " << listaProductos[i].nombreArticulo;
        cout << ", lleva una cantidad de " << listaProductos[i].cantidad;
        cout << ", el precio unitario es $" << listaProductos[i].precio;
        cout << " y el precio total de dicho articulo es $" << listaProductos[i].costoPorArticulo << endl << endl;
    }
}

void totalCompra(costoPorArticulo listaProductos[], int cantidadArticulos){
    float PrecioTotal = 0;
    for(int i = 0; i < cantidadArticulos; i++){
        PrecioTotal += listaProductos[i].costoPorArticulo;
    }
    cout << "El precio total de su compra es: $" << PrecioTotal << endl;
}

int main(void){
    int cantidadArticulos = 0;
    cout << endl << "COMPRA DE PRODUCTOS" << endl << endl;
    cout << "Ingrese la cantidad de artículos que lleva: ";
    cin >> cantidadArticulos;
    costoPorArticulo listaProductos[cantidadArticulos];

    leerArticulo(listaProductos, cantidadArticulos);
    costoTotalArticulo(listaProductos, cantidadArticulos);
    mostrarProductos(listaProductos, cantidadArticulos);
    totalCompra(listaProductos, cantidadArticulos);

    return 0;
}