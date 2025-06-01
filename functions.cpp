#include "functions.h"
#include <iostream>

Deposit inputDeposit() {
    Deposit dep;
    std::cout << "Введіть номер рахунку: ";
    std::cin >> dep.accountNumber;

    std::cout << "Введіть прізвище: ";
    std::cin >> dep.lastName;

    std::cout << "Введіть суму вкладу: ";
    std::cin >> dep.amount;

    std::cout << "Введіть дату (дд.мм.рррр): ";
    std::cin >> dep.date;

    return dep;
}

void printDeposit(const Deposit& dep) {
    std::string str = depositToString(dep);
    std::cout << "Результат перетворення:\n" << str << "\n";
}

std::string depositToString(const Deposit& dep) {
    std::string result = "Рахунок: ";
    result += std::to_string(dep.accountNumber);
    result += ", Прізвище: " + dep.lastName;
    result += ", Сума: " + std::to_string(dep.amount) + " грн";
    result += ", Дата: " + dep.date;
    return result;
}