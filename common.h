#pragma once
#include <iostream>
#include <list>
#include <deque>
#include <string>

class Employee {
public:
    std::string name;
    int id;
    Employee(std::string n = "", int i = 0) : name(n), id(i) {}
    bool operator==(const Employee& other) const { return id == other.id; }
    bool operator<(const Employee& other) const { return id < other.id; }
    friend std::ostream& operator<<(std::ostream& os, const Employee& e) {
        return os << "Сотрудник: " << e.name << " (id=" << e.id << ")";
    }
};

class Client {
public:
    std::string name;
    int account;
    Client(std::string n = "", int a = 0) : name(n), account(a) {}
    bool operator==(const Client& other) const { return account == other.account; }
    bool operator<(const Client& other) const { return account < other.account; }
    friend std::ostream& operator<<(std::ostream& os, const Client& c) {
        return os << "Клиент: " << c.name << " (acc=" << c.account << ")";
    }
};

inline void print_list_employees(const std::list<Employee>& lst) {
    for (const auto& x : lst) std::cout << x << std::endl;
}
inline void print_deque_clients(const std::deque<Client>& dq) {
    for (const auto& x : dq) std::cout << x << std::endl;
}
inline void print_deque_employees(const std::deque<Employee>& dq) {
    for (const auto& x : dq) std::cout << x << std::endl;
} 