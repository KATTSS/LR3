#include <iostream>
#include <cmath>

int main () {
    unsigned int x, s=0, a, i, p=1, step=0, ap, m=0;
    
    std::cout << "Введите натуральное число: ";
    std::cin >> i;
    
    while (i<=0){
        std::cout << "Введено некорректное значение, повторите попытку" << std::endl;
        std::cin >> i;
        }

    for (p=1; p<=i; p++) {
        x=p;

        while (x>=1) {
            x=x/10;
            ++step;
            std::cout << x << " " << step;
        }
        
        int step1=step;
        x=p;
        
        while (m<=step1) {
            a=x/(pow(10, step))-ap*pow(10, m);
            s+=pow(a, step1);
            ++m;
            --step;
        } 
        
        if (p==s) {std::cout << p << " ";}
    
      };
    return 0;
}
/**/