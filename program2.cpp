#include "common.h"
#include <algorithm>
using namespace std;

void program2() {
    cout << endl << "--- Демонстрация работы со списком сотрудников и очередью клиентов ---" << endl;
    list<Employee> l1 = {
        {"Сергеев Сергей", 1}, {"Волкова Анна", 2}, {"Морозов Павел", 3}, {"Кириллова Мария", 4}, {"Громов Алексей", 5}
    };
    cout << "Исходный список сотрудников:" << endl;
    print_list_employees(l1);

    l1.remove_if([](const Employee& e){ return e.id % 2 == 0; });
    replace(l1.begin(), l1.end(), Employee("", 3), Employee("Новиков Артём", 33));
    cout << endl << "После удаления сотрудников с чётным id и замены id=3 на Новиков Артём:" << endl;
    print_list_employees(l1);

    deque<Client> dq = {
        {"Лебедева Ольга", 1001}, {"Соколов Дмитрий", 1002}, {"Павлова Ирина", 1003}
    };
    cout << endl << "Очередь клиентов:" << endl;
    print_deque_clients(dq);

    auto it = l1.begin();
    ++it;
    auto erase_end = it;
    advance(erase_end, 2);
    l1.erase(it, erase_end);

    for (const auto& c : dq)
        l1.push_back(Employee(c.name, 0));

    cout << endl << "Список сотрудников после изменений:" << endl;
    print_list_employees(l1);
    cout << endl << "Очередь клиентов:" << endl;
    print_deque_clients(dq);
} 