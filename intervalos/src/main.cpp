/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;


double porcentagem(int total, int i, int v) {
    double result = ((double)v / (double)total) * 100;
    return result;
}

int main() {
    int x = 0, totalNumeros = 0, v[5]{ 0, 0, 0, 0, 0 };

    while (std::cin >> std::ws >> x) {
        totalNumeros++;

        if (x >= 0 && x < 25) {
            v[0]++;
        }
        else if (x >= 25 && x < 50) {
            v[1]++;
        }
        else if (x >= 50 && x < 75) {
            v[2]++;
        }
        else if (x >= 75 && x < 100) {
            v[3]++;
        }
        else if ((x < 0 || x >= 100)) {
            v[4]++;
        }
    }

    double r = 0.0;
    for (int i = 0; i < 5; i++) {
        r = porcentagem(totalNumeros, i, v[i]);
        std::cout << std::setprecision(4) << r << std::endl;
    }

    return 0;
}