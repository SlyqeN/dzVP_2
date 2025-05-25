#include "common.h"
#include <algorithm>

void program2() {
    std::cout << "\n--- Демонстрация работы со списком сотрудников и очередью клиентов ---\n";
    std::list<Employee> l1 = {
        {"Сергеев Сергей", 1}, {"Волкова Анна", 2}, {"Морозов Павел", 3}, {"Кириллова Мария", 4}, {"Громов Алексей", 5}
    };
    std::cout << "Исходный список сотрудников:\n";
    print_list_employees(l1);

    l1.remove_if([](const Employee& e){ return e.id % 2 == 0; });
    std::replace(l1.begin(), l1.end(), Employee("", 3), Employee("Новиков Артём", 33));
    std::cout << "\nПосле удаления сотрудников с чётным id и замены id=3 на Новиков Артём:\n";
    print_list_employees(l1);

    std::deque<Client> dq = {
        {"Лебедева Ольга", 1001}, {"Соколов Дмитрий", 1002}, {"Павлова Ирина", 1003}
    };
    std::cout << "\nОчередь клиентов:\n";
    print_deque_clients(dq);

    auto it = l1.begin();
    ++it;
    auto erase_end = it;
    std::advance(erase_end, 2);
    l1.erase(it, erase_end);

    for (const auto& c : dq)
        l1.push_back(Employee(c.name, 0));

    std::cout << "\nСписок сотрудников после изменений:\n";
    print_list_employees(l1);
    std::cout << "\nОчередь клиентов:\n";
    print_deque_clients(dq);
} 