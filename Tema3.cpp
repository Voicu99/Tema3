// Tema3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    float a, b;

    // Citirea valorilor pentru variabilele a și b
    cout << "Introduceti prima variabila (a): ";
    cin >> a;
    cout << "Introduceti a doua variabila (b): ";
    cin >> b;

    // Adunare, scădere, înmulțire și împărțire
    cout << "Rezultatele operatiilor intre a si b sunt:\n";
    cout << "Adunare: " << a + b << endl;
    cout << "Scadere: " << a - b << endl;
    cout << "Inmultire: " << a * b << endl;
    cout << "Impartire: " << ((b != 0) ? a / b : 0) << endl;

    // Incrementare și decrementare pentru ambele variabile
    cout << "Incrementare a (prefix): " << ++a << endl;
    cout << "Incrementare b (prefix): " << ++b << endl;
    cout << "Decrementare a (prefix): " << --a << endl;
    cout << "Decrementare b (prefix): " << --b << endl;


    // Incrementare prefix pentru ambele variabile
    cout << "Incrementare a (prefix): " << ++a << endl;
    cout << "Incrementare b (prefix): " << ++b << endl;

    // Incrementare postfix pentru ambele variabile
    float c = a++;
    float d = b++;
    cout << "Incrementare a (postfix): " << c << endl;
    cout << "Incrementare b (postfix): " << d << endl;


    // Mai mic, mai mare, egal și diferit pentru ambele variabile
    cout << "Comparare a < b: " << (a < b ? "True" : "False") << endl;
    cout << "Comparare a > b: " << (a > b ? "True" : "False") << endl;
    cout << "Comparare a == b: " << (a == b ? "True" : "False") << endl;
    cout << "Comparare a != b: " << (a != b ? "True" : "False") << endl;

    cout << "Comparare b < a: " << (b < a ? "True" : "False") << endl;
    cout << "Comparare b < a: " << (b > a ? "True" : "False") << endl;
    cout << "Comparare b == a: " << (b == a ? "True" : "False") << endl;
    cout << "Comparare b != a : " << (b != a ? "True" : "False") << endl;

    return 0;
}



    