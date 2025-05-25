#include <iostream>
#include <list>
#include <deque>
#include <algorithm>

void print_list(const std::list<long>& lst) {
    for (auto x : lst) std::cout << x << " ";
    std::cout << std::endl;
}
void print_deque(const std::deque<long>& dq) {
    for (const auto& x : dq) std::cout << x << " ";
    std::cout << std::endl;
}

void program1() {
    std::cout << "\n--- Демонстрация работы со списком и очередью long ---\n";
    std::list<long> l1 = {1, 2, 3, 4, 5, 6, 7};
    std::cout << "Исходный список: ";
    print_list(l1);

    l1.remove_if([](long x){ return x % 2 == 0; });
    std::replace(l1.begin(), l1.end(), 3L, 33L);
    std::cout << "После удаления чётных и замены 3 на 33: ";
    print_list(l1);

    std::deque<long> dq = {100, 200, 300};
    std::cout << "Вторая очередь: ";
    print_deque(dq);

    auto it = l1.begin();
    ++it;
    auto erase_end = it;
    std::advance(erase_end, 2);
    l1.erase(it, erase_end);

    l1.insert(l1.end(), dq.begin(), dq.end());

    std::cout << "Список после изменений: ";
    print_list(l1);
    std::cout << "Очередь: ";
    print_deque(dq);
} 