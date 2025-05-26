#include <iostream>
#include <map>
#include <string>
using namespace std;

void program4() {
    cout << endl << "--- ПРИЛОЖЕНИЕ 4 ---" << endl;
    map<string, int> phonebook;

    cout << "Добавление элементов:" << endl;
    phonebook["Карпов"] = 12345;
    phonebook["Усенко"] = 23456;
    phonebook.insert({"Горохова", 34567});
    phonebook.insert(make_pair("Костенко", 45678));
    phonebook["Гудов"] = 56789;
    phonebook["Боянов"] = 67890;

    cout << endl << "Доступ к элементу по ключу:" << endl;
    cout << "Телефон Усенко: " << phonebook["Усенко"] << endl;

    cout << endl << "Поиск элемента (find):" << endl;
    auto it = phonebook.find("Горохова");
    if (it != phonebook.end())
        cout << it->first << " найдена, телефон: " << it->second << endl;
    else
        cout << "Горохова не найдена" << endl;

    cout << endl << "Проверка наличия ключа:" << endl;
    cout << "Есть ли Костенко? " << (phonebook.count("Костенко") ? "Да" : "Нет") << endl;
    cout << "Есть ли Иванов? " << (phonebook.count("Иванов") ? "Да" : "Нет") << endl;

    cout << endl << "Удаление элемента (erase):" << endl;
    phonebook.erase("Гудов");
    cout << "Телефон Гудова удалён." << endl;

    cout << endl << "Размер map: " << phonebook.size() << endl;
    cout << "Пустой ли map: " << (phonebook.empty() ? "Да" : "Нет") << endl;

    cout << endl << "Очистка map:" << endl;
    phonebook.clear();
    cout << "Пустой ли map после clear: " << (phonebook.empty() ? "Да" : "Нет") << endl;
} 