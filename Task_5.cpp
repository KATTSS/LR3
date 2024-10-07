#include <iostream>
#include <cmath>
int main() {
    double i, x=2, y, n, ymin, xmin;

    std::cout << "Введите количество частей, на которые делим область: ";
    std::cin >> n;
    if (n<=0) {
        while (n<=0){
        std::cout << "Введено некорректное значение, повторите попытку" << std::endl;
        std::cin >> n;
        }
    }
    i=(3-x)/n;
    ymin=cos(2*x)/sin(2*x)+1/(1+pow(x, 2));

    do {
        y=cos(2*x)/sin(2*x)+1/(1+pow(x, 2));
        
        if (y<ymin) ymin=y; xmin=x;
        
        x+=i;
        
    } while (x<=3);
    std::cout << "Корень уравнения " << xmin << std::endl;

    return 0;
}