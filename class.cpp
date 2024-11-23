
#include <iostream>
using namespace std;
class TextBox {
public: 
	void setValue(string value) {
	 this->value=value;
	}
	string getValue() {
		return value;
	}
private:
	string value;
};

int main() {
	TextBox myValue;
	myValue.setValue("hi ");
	cout << myValue.getValue();
}

