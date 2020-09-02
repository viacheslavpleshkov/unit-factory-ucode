#include "accessModifiers.h"

int main() {
    Device Device_instance;
    Computer Computer_instance;
    subClass subClass;

    cout << "subClass" << endl;
    cout << "subClass.print: ";
    subClass.print();
    cout << "subClass.a: " << subClass.a << endl;

    cout << "Device" << endl;
    cout << "Serial number is: "<< Device_instance.serial_number << endl;
    Device_instance.turn_on();

//     cout << "Serial number is: " << Computer_instance.serial_number << endl;
//     Computer_instance.turn_on();

    cout << "Computer" << endl;
    Computer_instance.say_hello();
    return 0;
}