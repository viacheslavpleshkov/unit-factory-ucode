#pragma once

#include <iostream>
#include <string>

using namespace std;

class Class {
public:
    int a = 1;
protected:
    int b = 2;
private:
    int c = 3;

public:
};

class subClass : public Class {
public:
    void print() {
        cout << this->a << this->b << endl;
    }
};


class Device {
public:
    int serial_number = 12345678;

    void turn_on() {
        cout << "Device is on" << endl;
    }
};

class Computer: private Device {
public:
    void say_hello() {
        turn_on();
        cout << "Welcome to Windows 95!" << endl;
    }
};
