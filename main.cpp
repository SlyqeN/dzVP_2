#include <iostream>
void program1();
void program2();
void program3();
int main() {
    while (true) {
        std::cout << "\n--- ГЛАВНОЕ МЕНЮ ---\n";
        std::cout << "1. Демонстрация работы со списком и очередью long\n";
        std::cout << "2. Демонстрация работы со списком сотрудников и очередью клиентов\n";
        std::cout << "3. Демонстрация алгоритмов STL на сотрудниках\n";
        std::cout << "0. Выход\n";
        std::cout << "Ваш выбор: ";
        int choice;
        std::cin >> choice;
        switch (choice) {
            case 1:
                program1();
                break;
            case 2:
                program2();
                break;
            case 3:
                program3();
                break;
            case 0:
                return 0;
            default:
                std::cout << "Некорректный выбор!\n";
        }
    }
} 