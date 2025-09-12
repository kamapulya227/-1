#include <stack>
#include <iostream>

int main() {
    std::stack<int> myStack; // Создание пустого стека целых чисел

    myStack.push(10); // Добавляем элемент 10
    myStack.push(20); // Добавляем элемент 20
    myStack.push(30); // Добавляем элемент 30

    std::cout << "Верхний элемент: " << myStack.top() << std::endl; // Выведет 30
    std::cout << "Размер стека: " << myStack.size() << std::endl;  // Выведет 3

    myStack.pop(); // Удаляем 30

    std::cout << "Верхний элемент после pop: " << myStack.top() << std::endl; // Выведет 20

    while (!myStack.empty()) { // Проверяем, не пуст ли стек
        std::cout << myStack.top() << " "; // Выводим верхний элемент
        myStack.pop(); // Удаляем его
    }
    // Вывод: 20 10

    return 0;
}
