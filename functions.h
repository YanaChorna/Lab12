#pragma once
#include <string>

// Структура з різнотиповими полями
struct Deposit {
    int accountNumber;
    std::string lastName;
    double amount;
    std::string date;
};

// Прототипи функцій
Deposit inputDeposit();
void printDeposit(const Deposit& dep);
std::string depositToString(const Deposit& dep);
