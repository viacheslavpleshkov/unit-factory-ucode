#include "inheritance.h"

string MyFather::ShowEyeColor() {
    return EyeColor = "Brown";
}

string MyFather::ShowHairType() {
    return HairType = "Bald";
}

long double MyFather::FamilySaving() {
    return FamSaving = 100000L;
}

int MyFather::FamilyCar() {
    return FamCar = 4;
}

string MyMother::ShowMotherEye() {
    return EyeColor = "Blue";
}

string MyMother::ShowMotherHair() {
    return HairType = "Curly Blonde";
}

int MyMother::FamilyHouse() {
    return FamHouse = 3;
}

string MySelf::ShowMyHair() {
    return HairType = "Straight Black";
}

string MySelf::ShowMyEducation() {
    return Education = "Post Graduate";
}

string MySister::ShowSisEye() {
    return SisEye = "Black";
}

float MySister::ShowSisAllownace() {
    return MonAllowance = 1000.00;
}

int main(void) {
    MyFather ObjFather;
    MyMother ObjMother;
    MySelf ObjSelf;
    MySister ObjSister;

    cout << "--My father's data (base class)--" << endl;
    cout << "His eye: " << ObjFather.ShowEyeColor() << "\n"
         << "His hair: " << ObjFather.ShowHairType() << "\n"
         << "Family Saving: USD" << ObjFather.FamilySaving() << "\n"
         << "Family Car: " << ObjFather.FamilyCar() << " cars.\n";

    cout << "\n--My mother's data (base class)--" << endl;
    cout << "Her eye: " << ObjMother.ShowMotherEye() << endl;
    cout << "Her hair: "<< ObjMother.ShowMotherHair() << endl;
    cout << "Our family house: " << ObjMother.FamilyHouse() << " houses." << endl;
    cout << "\n--My data (derived/inherited class)--" << endl;
    cout << "My Hair: " << ObjSelf.ShowMyHair() << endl;
    cout << "My family saving: USD" << ObjSelf.MySelf::FamilySaving() << endl;
    cout << "My family car: " << ObjSelf.MySelf::FamilyCar() << " cars." << endl;
    cout << "My education: " << ObjSelf.ShowMyEducation() << endl;
    cout << "\n--My sister's data (derived/inherited class)--" << endl;
    cout << "Her eye: " << ObjSister.ShowSisEye() << endl;
    cout << "Our family saving: USD" <<ObjSister.MySister::FamilySaving() << endl;
    cout << "Our family car: " << ObjSister.MySister::FamilyCar()<<" cars." << endl;
    cout << "Our family house: " << ObjSister.MySister::FamilyHouse() << " houses." << endl;
    cout << "Her monthly allowances: USD" << ObjSister.ShowSisAllownace() << endl;

    return 0;
}