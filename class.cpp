
#include "class.hpp" 

using namespace std; 

TextBox::TextBox() {
    value = "";  // initialize value with an empty string
}

TextBox::TextBox(string initialValue) {
    value = initialValue;  // Initialize value with the given string
}

// Set value function
void TextBox::setValue(string newValue) {
    value = newValue;
}

// Get value function
string TextBox::getValue() const {
    return value;
}
