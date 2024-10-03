#include <iostream>
#include <cmath>
int main() {
    float a, b, s;
    float N=0;
    int i=1;

    while (i<=30) {
        if (i % 2==0) {
            a=i/2;
            b=pow(i, 3);
        } else {
            a=i;
            b=pow(i, 2);
        }

        s=pow(a-b, 2);
        N=N+s;
        ++i;

         std::cout << "N=" << N << std::endl;

    }

    std::cout << "N=" << N << std::endl;

    return 0;
}