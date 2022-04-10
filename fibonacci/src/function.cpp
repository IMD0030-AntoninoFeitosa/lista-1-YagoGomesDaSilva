#include "function.h"

std::vector<unsigned int> fib_below_n(unsigned int n) {

    std::vector< unsigned int> v;
    bool b = true;
    int cont = 0, aux = 0;

    while (b) {

        if (cont == 0 || cont == 1) {
            if (n > 1) {
                v.push_back(1);
            }
            else {
                return v;
            }
        }
        else {
            aux = v[cont - 1] + v[cont - 2];
            if (aux < n) {
                v.push_back(aux);
            }
            else {
                b = false;
            }
        }
        cont++;
    }
    return v;
}