#include <iostream>
#include <cmath>

int function() {
    double y, a=0, b, h, x;
    double p=3.1415926535;
    int i, m=20;
   
    b=p/2;
    std::cout << b << std::endl;
    h=(b-a)/m;

    for (i=1;b-a>=0; i++) {
    x=a+i*h;
    x=x*p/180;
    std::cout << x << std::endl;
    y=sin(x)-cos(x);
    std::cout << "y=" << y << std::endl;
    a+=i;

    } 
    
    return y;
}
int main () {
    function();

    return 0;
}