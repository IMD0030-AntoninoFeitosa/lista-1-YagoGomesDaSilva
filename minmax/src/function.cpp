#include "function.h"

std::pair<int, int> min_max(int V[], std::size_t n)
{
    int x = 0, aux_max = 0, aux_min = 0;

    std::pair<int, int> par;

    par.first = V[0], par.second = V[0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (V[i] < V[j]) {
                aux_min = V[i];
                if (aux_min < par.first) {
                    par.first = aux_min;
                }
            }
            else if (V[i] > V[j]) {
                aux_max = V[i];
                if (aux_max > par.second) {
                    par.second = aux_max;
                }
            }

        }
    }

    return par;
}