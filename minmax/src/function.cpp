#include "function.h"

std::pair<int, int> min_max(int V[], std::size_t n)
{
    if (n == 0) {
        return  std::make_pair(-1, -1);
    }

    int x = 0, aux_max = 0, aux_min = 0, min = 0, max = 0;

    std::pair<int, int> par;
    std::pair<int, int> par_aux;

    par.first = V[0], par.second = V[0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (V[i] < V[j]) {
                aux_min = V[i];
                if (aux_min < par_aux.first) {
                    par_aux.first = aux_min;
                    min = i;
                }
            }
            else if (V[i] > V[j]) {
                aux_max = V[i];
                if (aux_max > par_aux.second) {
                    par_aux.second = aux_max;
                    max = i;
                }
            }

        }
    }

    return std::make_pair(min, max);
}