#include <iostream>
#include <cmath>
#include <vector>

int n, o=0, m;
double s, y, x;

int main () {
    std::cout << "Введите количество чисел, от которых хотите посчитать функцию:" << std::endl; //ввод числа рассчётов функции
    std::cin >> m;
    
    std::vector<int> a(m);
    std::cout << "Введите аргументы, от которых хотите посчитать функцию:\n";
    
    for (int i = 0; i < m; ++i) {
        std::cin >> a[i];
    }
    
    std::cout << "Введите число членов ряда:" << std::endl; //ввод числа членов ряда
    std::cin >> n;

   for (size_t i = 0; i < a.size() - 1; ++i) {
       
        int o=1;
         while (o<=n) {
        s+=(pow(x, 3+2*n)+5*pow(x, 3))/(3*pow(x, 2)+15);
        ++o;
    }
         y=((1+pow(x, 2))*atan(x)-x)/2;

        std::cout << "Значение, полученое разложением ряда: " << s << std::endl;
        std::cout << "Значение, полученое функционально: " << y << std::endl;
        
        if (y>s) std::cout << "Значение, полученное функционально больше" << std::endl;
        else if (y<s) std::cout << "Значение, полученное разложением больше" << std::endl;
        else std::cout << "Значения равны" << std::endl;
        
        ++o;
    }   

    return 0;
}


