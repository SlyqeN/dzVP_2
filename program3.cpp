#include "common.h"
#include <algorithm>
using namespace std;

void program3() {
    cout << endl << "--- Демонстрация алгоритмов STL на сотрудниках ---" << endl;
    list<Employee> l1 = {
        {"Сергеев Сергей", 5}, {"Волкова Анна", 2}, {"Морозов Павел", 8}, {"Кириллова Мария", 1}, {"Громов Алексей", 7}, {"Новиков Артём", 3}, {"Орлова Светлана", 6}
    };

    l1.sort([](const Employee& a, const Employee& b){ return a.id > b.id; });
    cout << "Сотрудники по убыванию id:" << endl;
    print_list_employees(l1);

    auto it = find_if(l1.begin(), l1.end(), [](const Employee& e){ return e.id > 5; });
    if (it != l1.end())
        cout << "Первый сотрудник с id > 5: " << *it << endl;

    deque<Employee> dq;
    copy_if(l1.begin(), l1.end(), back_inserter(dq), [](const Employee& e){ return e.id > 5; });

    cout << endl << "Очередь сотрудников с id > 5:" << endl;
    print_deque_employees(dq);

    l1.sort();
    sort(dq.begin(), dq.end());

    cout << endl << "Сотрудники по возрастанию id:" << endl;
    print_list_employees(l1);
    cout << "Очередь сотрудников по возрастанию id:" << endl;
    print_deque_employees(dq);

    list<Employee> l3;
    merge(l1.begin(), l1.end(), dq.begin(), dq.end(), back_inserter(l3));

    cout << endl << "Объединённый список сотрудников:" << endl;
    print_list_employees(l3);

    int count = count_if(l3.begin(), l3.end(), [](const Employee& e){ return e.id > 5; });
    cout << endl << "Количество сотрудников с id > 5: " << count << endl;

    bool found = any_of(l3.begin(), l3.end(), [](const Employee& e){ return e.id == 100; });
    cout << "Есть ли сотрудник с id == 100: " << (found ? "Да" : "Нет") << endl;
} 