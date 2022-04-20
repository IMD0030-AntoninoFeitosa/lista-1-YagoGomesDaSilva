/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {

    int m = 0, n = 0, x = 0, a = 0;

    while (std::cin >> std::ws >> m >> n) {
        if (n == 0) {
            std::cout << m << std::endl;
        }
        else if (n > 0) {
            for (int i = 1; i <= n + 1; i++) {
                a = m + (n - 1) * i;
            }
            std::cout << a << std::endl;
        }
        else if (n < 0) {
            for (int i = 0; i < abs(n); i++) {
                x += m;
                m--;
            }
            std::cout << x << std::endl;
        }
    }

    return 0;
}