#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void menu() {
    
    std::cout << "\nЗапуск программы - 1" << std::endl;
    std::cout << "Кто выполнил задание? - 2" << std::endl;
    std::cout << "Суть программы - 3" << std::endl;
    std::cout << "Завершить программу - 4\n" << std::endl;
}

int work() {
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

int main() {
    bool exit=false;
   
    while (!exit) {
        menu();

        int x;
        string s;

        do {
            cout<<"Введите номер желаемой операции: ";
            getline(cin, s);
        } while (s.find_first_not_of("01234") != string::npos);
        try {
            x=stoi(s);
        }
        catch (std::invalid_argument& e) {
            cout<< "\nВведено некорректно, повторите ввод\n"; x=0;
        }
        catch (std::out_of_range& e) {
            cout<< "\nВведено некорректно, повторите ввод\n"; x=0;
        }
        catch (...) {
            cout<< "\nВведено некорректно, повторите ввод\n"; x=0;
        }

        switch (x) {
            case 0 : cout<< "Будьте вниметельнее!!!\n";
            break; 

            case 1 : work();
            break;

            case 2: 
            std::cout << "Буткевич Екатерина, группа 453501" << std::endl;
            break;
            
            case 3: 
            std::cout << "Вычисление функции N(i)" << std::endl;
            break;
            
            case 4:
            exit=true;
            break;
            

            //default: std::cout << "Введите значение повторно"<< std::endl;
            
        }
    }
    
    return 0;
}