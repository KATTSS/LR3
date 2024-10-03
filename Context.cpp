#include <iostream>
#include <cmath>

void menu() {
   // system("cls");
    std::cout << "Запуск программы - 1" << std::endl;
    std::cout << "Кто выполнил задание? - 2" << std::endl;
    std::cout << "Выход из программы - 3" << std::endl;
    std::cout << "Введите номер желаемого действия:" << std::endl;
}

/*int getoption(int num) {
            int num;
            string s;
            getline( cin, s);
        }
*/

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
    int num;

   /* std::cout << "Добро пожаловать в контекстное меню, \nдля выполнения действия введите соответствующую цифру: " << std::endl;
    std::cout << "Запуск программы - 1" << std::endl;
    std::cout << "Кто выполнил задание? - 2" << std::endl;
    std::cout << "Выход из программы - 3" << std::endl;*/

    while (!exit) {
        menu();

        std::cin >> num;
        
        switch (num) {
            case 1 : work();
            break;

            case 2: 
            std::cout << "Буткевич Екатерина, группа 453501" << std::endl;
            break;
            
            case 3: 
            exit=true;
        }
    }
    
    return 0;
}