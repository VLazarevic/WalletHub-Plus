//
// Created by Valentino Lazarevic on 19.12.23.
//

#ifndef WALLTETHUB_PLUS_ACCOUNT_H
#define WALLTETHUB_PLUS_ACCOUNT_H

#pragma once

#include <list>
#include <iostream>
#include "expense.h"

class Account {
private:
    std::string name;
    std::list<Expense> expenses;
    double balance;
public:
    Account(std::string name);
    std::string getName();
    void setName(std::string name);
    bool addExpense(Expense expense);
    bool removeExpense(Expense expense);
    std::list<Expense> getAllExpenses();
};

#endif //WALLTETHUB_PLUS_ACCOUNT_H
