#include <iostream>
#include "Calculadora.h"
#include <string>

using namespace std;

int main() {

    Calculadora<int> calint;
    Calculadora<char> calchar;
    Calculadora<float> calfloat;
    Calculadora<string> calstring;

    // Calculadora de ints
    calint.setA(4);
    calint.setB(5);

    cout<<calint.sumar()<<endl;
    cout<<calint.dividir()<<endl<<endl;

    // Calculadora de chars
    calchar.setA(4);
    calchar.setB(5);

    cout<<calchar.sumar()<<endl;
    cout<<calchar.dividir()<<endl<<endl;

    // Calculadora de float
    calfloat.setA(4);
    calfloat.setB(5);

    cout<<calfloat.sumar()<<endl;
    cout<<calfloat.dividir()<<endl<<endl;

    // Calculadora de string
    calstring.setA("Hola ");
    calstring.setB("mundo");

    cout<<calstring.sumar()<<endl;

    cout << "Ejercicio 00/02\n" << endl;
    return 0;
}