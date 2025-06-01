#pragma once

#include <string>

struct Deposit {
    int accountNumber;
    std::string lastName;
    double amount;
    std::string date;
};

// Прототип функції для перетворення структури у рядок
std::string depositToString(const Deposit& dep);