#include <iostream>
#include <cmath>
int main () {
    int sum = 0, count = 0,temp,i, max;
        std::cout << "Введите число: " << std::endl;
    std::cin>>max;
    for (int i = 0; i < max; i++)
    {
        temp = i;
        while(temp != 0) {
            temp = temp / 10; ++count;
        }
        temp = i;
        while(temp)
        {
            sum+= pow(temp % 10, count);
            temp = temp / 10;
        }
        if(sum == i) std::cout << i << std::endl;  
    sum = 0; count = 0;
    }
}