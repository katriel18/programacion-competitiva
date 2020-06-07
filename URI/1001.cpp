/*
Leer 2 variables, denominadas A y B y que la suma de estas dos variables, 
asignando su resultado a la variable X . Imprima X como se muestra a continuacion.
 Imprima la linea final despues del resultado, de lo contrario obtendra 
 " Error de presentacion ".

Entrada
El archivo de entrada contendra 2 numeros enteros.

Salida
Imprima la letra X (mayuscula) con un espacio en blanco antes y despues de la senal 
igual seguida del valor de X, de acuerdo con el siguiente ejemplo.

Obs .: no olvides la linea final despues de todo.
*/

using namespace std;

#include <iostream>

int main(){

    int A, B, X;
    
    cin >> A >> B;
    X = A + B ;
    cout <<"X = " << X << endl;

    return 0;
}

