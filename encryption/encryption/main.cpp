#include<iostream>
#include"Encryption.h"
#include"Employee.h"
#include"Encryption.h"

using namespace std;
int main(void) {
	Encryption handle;
	string pin = "test";
	string message = "This is a test.";
	bool isValid = false;
	handle.setPin(pin);
	handle.setMessage(message);
	cout << "The message:\n\t" << message;
	message = handle.cipherMessage();
	cout << "\nEncrypted message:\n\t" << message << endl;
	isValid = handle.verifyPin(pin);
	message = handle.decipherMessage();
	cout << "\nThe orignal message:\n\t" << message << endl;
	char x = 'a';
	x += 32;
	cout << x;
	system("pause");
	return 0;
}

