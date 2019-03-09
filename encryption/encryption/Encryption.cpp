#include "Encryption.h"
Encryption::Encryption() {
	this->userMessage = "test.";
	this->userPin = "password123";
}
Encryption::Encryption(string pin, string message) {
	this->userMessage = message;
	this->userPin = pin;
}
//GETTERS:
string  Encryption::getPin(void) {

	return this->userPin;
}
string Encryption::getMessage(void) {
	/*string sentence;
	cout<<"END YOUR TEXT WITH A PERIOD.\n\t";
	cout<<"ENTER YOUR TEXT: ";
	getline(std::cin, sentence);*/
	return this->userMessage;
}
//SETTERS:
void Encryption::setPin(string pin) {
	this->userPin = pin;
}
void Encryption::setMessage(string userMessage) {
	this->userMessage = userMessage;//ENSURE THERE IS A PERIOD AT THE END OF THE STRING
}
//METHODS:
string Encryption::cipherMessage() {
	unsigned char key = 11001100;
	int i = 0, counter = 0;
	while (this->userMessage[i] != 46)//READ STRING UNTIL PERIOD IS FOUND
	{
		counter++;//LIMIT FOR THE FOR LOOP
		i++;//INCREMENTS THROUGH THE STRING
	}
	for (int currentLetter = 0; currentLetter < counter; currentLetter++)
	{
		userMessage[currentLetter] ^= key;
	}

	return userMessage;//return encrypted string 
}
string Encryption::decipherMessage() {
	unsigned char key = 11001100;
	int i = 0, counter = 0;
	if (verifyPin) {//RETURNS TRUE DECHIPER
		while (this->userMessage[i] != 46) {
			counter++;//LIMIT FOR THE FOR LOOP
			i++;//INCREMENTS THROUGH THE STRING
		}
		for (int currentLetter = 0; currentLetter < counter; currentLetter++) {
			this->userMessage[currentLetter] ^= key;
		}
		system("cls");
		return this->userMessage;
	}
	return nullptr;//OR RETURN ENCRYPTED MESSAGE???
}
bool Encryption::verifyPin(string pinAttempt) {
	if (this->userPin == pinAttempt) {
		return true;
	}
	else {
		return false;
	}
}
