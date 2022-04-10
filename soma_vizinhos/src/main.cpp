/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{

    int m = 0, n = 0, x = 0, a = 0;

    std::cin >> m;
    std::cin >> n;

    if (n == 0) {
        std::cout << m << std::endl;
    }
    else if (n > 0) {
        for (int i = 1; i <= n + 1; i++) {
            a = m + (n - 1) * i;
        }
        std::cout << a;
    }
    else if (n < 0) {
        for (int i = 0; i < abs(n); i++) {
            x += m;
            m--;
        }
        std::cout << x;
    }

    return 0;
}
