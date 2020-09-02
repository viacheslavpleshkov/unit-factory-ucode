#pragma once

#include <iostream>
#include <string>

using namespace std;

class interfaceHuman {
public:
    virtual string getFirstName() = 0;
    virtual void setFirstName(string firstName) = 0;
    virtual string getLastName() = 0;
    virtual void setLastName(string lastName) = 0;
    virtual int getAge() = 0;
    virtual void setAge(int age) = 0;

protected:
    string m_firstName;
    string m_lastName;
    int m_age;
};

class People : public interfaceHuman {
public:
    People() = default;
    ~People() = default;

    string getFirstName() override {
        return this->m_firstName;
    }

    void setFirstName(string firstName) override {
        this->m_firstName = firstName;
    }

    string getLastName() override {
        return this->m_lastName;
    }

    void setLastName(string lastName) override {
        this->m_lastName = lastName;
    }

    int getAge() override{
        return this->m_age;
    }

    void setAge(int age) override {
        this->m_age = age;
    }

    void showAll() {
        std::cout << "First name: " << m_firstName << std::endl;
        std::cout << "Last name: " << m_lastName << std::endl;
        std::cout << "Age: " << m_age << std::endl;
    }
};