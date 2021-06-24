#include <iostream>
using namespace std;
int main() {
    //1. Imprimir la palabra pucese 5 veces
    int b, c, d, dd, o;
    int e;
    d = 0;
    o = 0;
    dd = 0;
    for (int a = 0; a < 5; a++) {
        cout << endl << "hola: " << (a + 1);
        cout << endl << "fin";
    }
    //2. Imprimir tabla de multiplicar de 5
    for (b = 1; b <= 10; b++) {
        cout << endl << "5 x " << b << " = " << (5 * b);
    }
    //3. Se pide un numero entero para sacar su tabla de multiplicacion del 1 al 12
    cout << endl << "ingrese un numero entero";
    cin >> c;
    for (b = 1; b <= 12; b++) {
        cout << endl << c << " x " << b << " = " << (c * b);
    }
    //4. Calcular la sumatorio de los números entre 500 y  800
    for (b = 500; b <= 800; b++) {
        d = d + b;
    }
    cout << endl << "La sumatoria entre 500 a 800 es: " << d << endl;
    //5. se pide 2 enteros que representan principio y fin de una serie, se pide realizar la sumatorio del rango ingresado
    cout << "Ingrese el inicio y el fin del rango a tratar";
    cin >> e;
    cin >> c;
    for (e = e; e <= c; e++) {
        if (e % 5 == 0) {
            o = o + e;
        }
    }
    cout << endl << "el valor es: " << o;
    //6. Imprimir un rectangulo de asteriscos
    //**********
    //********
    cout << endl << "Impresion de un rectangulo" << endl;
    for (b = 1; b <= 5; b++) {
        for (c = 1; c <= 10; c++) {
            cout << "*";
        }
        cout << endl;
    }
    //7. Imprimir las 10 primeras tablas de multiplicar
    for (b = 1; b <= 10; b++){
        for (c = 1; c <= 10; c++) {
            cout << endl << "Tabla de " << b << " mutliplicacion: " << b << " x " << c << " = " << b * c;
        }
        cout << endl;
        dd = dd + 1;


    }
    return 0;
}