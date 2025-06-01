#include "utils.h"
#include <iostream>
#include <sstream>
#include <stdexcept>

Deposit inputDeposit() {
    Deposit dep;
    std::cout << "Введіть номер рахунку: ";
    std::cin >> dep.accountNumber;

    std::cout << "Введіть прізвище: ";
    std::cin >> dep.lastName;

    std::cout << "Введіть суму вкладу: ";
    std::cin >> dep.amount;

    std::cout << "Введіть дату (у форматі дд.мм.рррр): ";
    std::cin >> dep.date;

    if (dep.amount < 0)
        throw std::invalid_argument("Сума вкладу не може бути від’ємною!");

    return dep;
}

void printDeposit(const Deposit& dep) {
    std::cout << "Результат перетворення:\n" << depositToString(dep) << "\n";
}

std::string depositToString(const Deposit& dep) {
    std::ostringstream oss;
    oss << "Рахунок: " << dep.accountNumber << ", "
        << "Прізвище: " << dep.lastName << ", "
        << "Сума: " << dep.amount << " грн, "
        << "Дата: " << dep.date;
    return oss.str();
}
