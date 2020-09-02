#pragma once

#include <iostream>
#include <string>

using namespace std;

class MyFather {
protected:
    string EyeColor;
    string HairType;
    double FamSaving;
    int FamCar;

public:
    MyFather() {}
    ~MyFather() {}

    string ShowEyeColor();
    string ShowHairType();
    long double FamilySaving();
    int FamilyCar();
};

class MyMother{
protected:
    string EyeColor;
    string HairType;
    int FamHouse;
public:
    MyMother(){}
    ~MyMother(){}

    string ShowMotherEye();
    string ShowMotherHair();
    int FamilyHouse();
};

class MySelf : public MyFather {
protected:
    string HairType;
    string Education;
public:
    MySelf() {}
    ~MySelf() {}

    string ShowMyHair();
    string ShowMyEducation();
};


class MySister : public MyFather, public MyMother {
protected:
    string SisEye;
    float MonAllowance;
public:
    MySister() {}
    ~MySister() {}

    string ShowSisEye();
    float ShowSisAllownace();

};