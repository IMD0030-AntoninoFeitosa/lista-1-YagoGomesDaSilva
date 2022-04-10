#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main() {
    int resultado = 0, valor;

    for (int i = 0; i < SIZE; i++) {
        std::cin >> valor;
        if (valor < 0) {
            resultado++;
        }
    }

    std::cout << resultado;

    return 0;
}