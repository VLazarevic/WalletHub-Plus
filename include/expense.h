//
// Created by Valentino Lazarevic on 19.12.23.
//

#ifndef WALLTETHUB_PLUS_EXPENSES_H
#define WALLTETHUB_PLUS_EXPENSES_H

#include <iostream>

class Expense{
private:
    std::string name;
    bool paid;
    double amount;
public:
    Expense(std::string name, double amount);
    std::string getName();
    void setName(std::string name);
    double getAmount();
    void setAmount(double amount);
    bool getPaid();
    void setPaid(bool paid);
};

#endif //WALLTETHUB_PLUS_EXPENSES_H
