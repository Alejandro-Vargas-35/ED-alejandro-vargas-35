// Funciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
using namespace std;

//Funcion prototipo
void imprime(vector<int>v) {
    for (auto elemento : v) {
        cout << elemento << " , ";
    }
}

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    imprime(v);
}
