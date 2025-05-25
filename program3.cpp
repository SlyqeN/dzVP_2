#include "common.h"
#include <algorithm>

void program3() {
    std::cout << "\n--- Демонстрация алгоритмов STL на сотрудниках ---\n";
    std::list<Employee> l1 = {
        {"Сергеев Сергей", 5}, {"Волкова Анна", 2}, {"Морозов Павел", 8}, {"Кириллова Мария", 1}, {"Громов Алексей", 7}, {"Новиков Артём", 3}, {"Орлова Светлана", 6}
    };

    l1.sort([](const Employee& a, const Employee& b){ return a.id > b.id; });
    std::cout << "Сотрудники по убыванию id:\n";
    print_list_employees(l1);

    auto it = std::find_if(l1.begin(), l1.end(), [](const Employee& e){ return e.id > 5; });
    if (it != l1.end())
        std::cout << "Первый сотрудник с id > 5: " << *it << std::endl;

    std::deque<Employee> dq;
    std::copy_if(l1.begin(), l1.end(), std::back_inserter(dq), [](const Employee& e){ return e.id > 5; });

    std::cout << "\nОчередь сотрудников с id > 5:\n";
    print_deque_employees(dq);

    l1.sort();
    std::sort(dq.begin(), dq.end());

    std::cout << "\nСотрудники по возрастанию id:\n";
    print_list_employees(l1);
    std::cout << "Очередь сотрудников по возрастанию id:\n";
    print_deque_employees(dq);

    std::list<Employee> l3;
    std::merge(l1.begin(), l1.end(), dq.begin(), dq.end(), std::back_inserter(l3));

    std::cout << "\nОбъединённый список сотрудников:\n";
    print_list_employees(l3);

    int count = std::count_if(l3.begin(), l3.end(), [](const Employee& e){ return e.id > 5; });
    std::cout << "\nКоличество сотрудников с id > 5: " << count << std::endl;

    bool found = std::any_of(l3.begin(), l3.end(), [](const Employee& e){ return e.id == 100; });
    std::cout << "Есть ли сотрудник с id == 100: " << (found ? "Да" : "Нет") << std::endl;
} 