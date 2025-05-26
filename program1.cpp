#include <iostream>
#include <list>
#include <deque>
#include <algorithm>
using namespace std;

void print_list(const list<long>& lst) {
    for (auto x : lst) cout << x << " ";
    cout << endl;
}
void print_deque(const deque<long>& dq) {
    for (const auto& x : dq) cout << x << " ";
    cout << endl;
}

void program1() {
    cout << endl << "--- Демонстрация работы со списком и очередью long ---" << endl;
    list<long> l1 = {1, 2, 3, 4, 5, 6, 7};
    cout << "Исходный список: ";
    print_list(l1);

    l1.remove_if([](long x){ return x % 2 == 0; });
    replace(l1.begin(), l1.end(), 3L, 33L);
    cout << "После удаления чётных и замены 3 на 33: ";
    print_list(l1);

    deque<long> dq = {100, 200, 300};
    cout << "Вторая очередь: ";
    print_deque(dq);

    auto it = l1.begin();
    ++it;
    auto erase_end = it;
    advance(erase_end, 2);
    l1.erase(it, erase_end);

    l1.insert(l1.end(), dq.begin(), dq.end());

    cout << "Список после изменений: ";
    print_list(l1);
    cout << "Очередь: ";
    print_deque(dq);
} 