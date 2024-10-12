/*#include <iostream>
#include <cmath>
int main (){
    long long i, n, a, s, q=1;
    std::cout << "Введите целое число: ";
    std::cin >> a;
    std::cout << "Введите число членов последовательности: ";
    std::cin >> i;
    while (n<=i) {
        q*=2;
        ++n;
    }
    if (i%2==0) q=q;
    else q=-q;
    s=a*(q-1)/(-3);

    std::cout << s;
    return 0;
} */

//тест пашиной программы


#include <iostream>
#include <vector>
#include <limits>

int main() {
    int n;
    std::cout << "Введите количество элементов (n): ";
    std::cin >> n;

    std::vector<int> a(n);
    std::cout << "Введите элементы массива a: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    long long result = 0;
    long long power_of_two = 1; // 2^0

    for (int i = 0; i < n; ++i) {
        long long term = power_of_two; // 2^i
        if (i % 2 != 0) {
            term = -term; // (-1)^i
        }
        term *= a[i];

        if (result > std::numeric_limits<long long>::max() - term) {
            std::cerr << "Переполнение при сложении!" << std::endl;
            return 1;
        }
        result += term;

        // Обновление значения 2^i для следующей итерации
        if (power_of_two <= std::numeric_limits<long long>::max() / 2) {
            power_of_two *= 2;
        } else {
            std::cerr << "Переполнение при вычислении степени двойки!" << std::endl;
            return 1;
        }
    }

    std::cout << "Результат: " << result << std::endl;
    return 0;
}