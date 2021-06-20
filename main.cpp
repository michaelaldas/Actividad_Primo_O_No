#include <iostream>
using namespace std;
//Ejercicio 4:  Se ingresa un entero por teclado. Se desea determinar
//si el número ingresado es primo o no. Utilice bucles "while".

//Algoritmo:
//1.INICIO
//2.Asignar numero, m=2, band
//3. Escribir numero
//   3.1.numero
//4.wilw(banda && m< numero)
//5.Si el numero y porcentaje de m es igual a 0
//  5.1. band es falso
//6.caso contrario
//  6.1. m=m+1
//7.Mostrar
//  7.1"El numero es primo"
//  7.2"El numero no es primo"
//FIN
    int main() {
        int numero, m=2;
        bool band = true;

        cout<<"Ingresar un numero: ";
        cin>>numero;

        while (band && m < numero) {
            if (numero % m == 0)
                band = false;
            else
                m = m + 1;
        }
        if(band)

            cout<<"El numero es primo";

        else
            cout<<"El numero no es primo";


        return 0;
    }

