//
// Created by Valentino Lazarevic on 19.12.23.
//

#ifndef WALLTETHUB_PLUS_USER_H
#define WALLTETHUB_PLUS_USER_H

#pragma once

#include "enums.h"
#include "account.h"
#include <iostream>
#include <list>

class User{
private:
    std::string name;
    std::string lastname;
    int age;
    Sex gender;
    std::list<Account> accounts;
    Account activeAcc;

public:
    User(std::string name, std::string lastname, int age, Sex gender);
    std::string getName();
    void setName(std::string name);
    void setLastName(std::string lastname);
    int getAge();
    void setAge(int age);
    Sex getGender();
    void setGender(Sex gender);
    bool addAccount(Account account);
    bool removeAccount(Account account);
    std::list<Account> getAllAccounts();
    void setActiveAccount(Account account);
    Account getActiveAccount();
};

#endif //WALLTETHUB_PLUS_USER_H
