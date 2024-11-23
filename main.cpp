
#include <iostream>
#include "class.hpp"  

using namespace std;  

int main() {
    // Using default constructor
    TextBox myValue;
    myValue.setValue("hi ");
    cout << myValue.getValue() << endl;

    // Using explicit constructor with a string argument
    TextBox anotherTextBox("Welcome everyone!");
    cout << anotherTextBox.getValue() << endl;

    return 0;
}
