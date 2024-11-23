
#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#include <string>  

using namespace std;  
class TextBox {
public:
    // Default constructor
    TextBox();

    // Explicit constructor
    explicit TextBox(string initialValue);

    // Set value function
    void setValue(string value);

    // Get value function
    string getValue() const;

private:
    string value;  
};

#endif 
