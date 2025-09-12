#Создание списка

#include <iostream> // Для вывода на консоль
#include <list>     // Для использования std::list
#include <string>   // Для использования std::string

int main() {
    // 1. Создание пустого списка целых чисел
    std::list<int> empty_list;

    // 2. Создание списка целых чисел с начальными значениями
    std::list<int> numbers = {10, 20, 30, 40};

    // 3. Создание списка строк с начальными значениями
    std::list<std::string> fruits = {"Яблоко", "Банан", "Апельсин"};

    // Добавление элемента в конец списка
    numbers.push_back(50); // numbers теперь: {10, 20, 30, 40, 50}


#Создание стэка

#include <iostream>
#include <stack> // Включаем заголовок для std::stack

int main() {
    // Создание стека целых чисел
    std::stack<int> myStack;

    // Добавление элементов в стек (операция push)
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    myStack.push(20);
