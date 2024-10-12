#include <iostream>
 float x, y, fsin=1, c, m;
 
 int n=10;

 /*double pow(double x, double n){//Функция вычисления x^2n+1
    double X=1, b=2*n+1;
    int i;
    for(i=1;i<=b;i++){X=X*x;}
 
    return X;} */

 //факториал для синуса
/*float factsin(float n) {
    
    while (n<=10) {
        fsin*=(2*n-1);
    }
    return fsin;
} */
// чтото типа счётчика отдельной степени
float step(float n){
    float n1=1;
    float xs=x;
    while (2*n1-1<=2*n-1)  {
        x=x*xs;
        ++n1;
    }
    return x;
}
// считалка синуса хуёвая
/*int sin (float m) {
    float sinx;
if (n%2==0) {
    n=0;
    while (n<+10) {
    
    sinx+=step(n+1)/factsin(n+1);
    ++n;}}
else { n=0;
while (n<=10) {
    sinx+=(-1)*step(n+1)/factsin(n+1);
    ++n;}}
    return sinx;
} */
double fact(double n){//Функция вычисления факториала
    double f=1,b=2*n+1;
    int i;
    for(i=0;i<=b;i++){
        f=f*i;
    if(i==0){f=1;}
                     }
    return f;}
int main () {
    
    std::cin >> x;
    x=step(10);
    std::cout << x;
    float ff;
    ff=fact(n);
    std::cout << " " << ff;

    return 0;
};