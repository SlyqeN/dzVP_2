#include <iostream>
using namespace std;
void program1();
void program2();
void program3();
void program4();
int main() {
    while (true) {
        cout << "\n--- ГЛАВНОЕ МЕНЮ ---\n" << endl;
        cout << "1. Демонстрация работы со списком и очередью long" << endl;
        cout << "2. Демонстрация работы со списком сотрудников и очередью клиентов" << endl;
        cout << "3. Демонстрация алгоритмов STL на сотрудниках" << endl;
        cout << "4. Демонстрация работы с отображением (map)" << endl;
        cout << "0. Выход" << endl;
        cout << "Ваш выбор: ";
        int choice;
        cin >> choice;
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
            case 4:
                program4();
                break;
            case 0:
                return 0;
            default:
                cout << "Некорректный выбор!" << endl;
        }
    }
} 