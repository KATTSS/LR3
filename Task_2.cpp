#include <iostream>
#include <cmath>
int rad(){
    int n=1;
    double e=0.001, dn, s=0, dn1;
    
    do {
       dn=1/pow(2, n)+1/pow(3, n);
       dn1=1/pow(2, n-1)+1/pow(3, n-1);
       s+=dn;
       n++;
    } while (fabs(dn-dn1)>e);

    std::cout<< "s="<< s<< std::endl;
    
    return s;
}  

int main(){
    rad();
    return 0;
}