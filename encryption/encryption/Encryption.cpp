#include "Encryption.h"
Encryption::Encryption() {
	this->userMessage = "test.";
	this->userPin = "Password123";
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
	int counter = 0;
	while (!this->userMessage.end())//READ STRING UNTIL THE END
	{
		counter++;//NUMBER OF CHAR IN STRING	
	}
	for (int currentLetter = 0; currentLetter < counter; currentLetter++)
	{
		userMessage[currentLetter] ^= KEY;//BITWISE XOR
	}

	return userMessage;//return encrypted string 
}
string Encryption::decipherMessage() {
	int i = 0, counter = 0;
	if (verifyPin) {
		while (!this->userMessage.end() {//NOT THE END OF STRING BUILT-IN CLASS
			counter++;//LIMIT FOR THE FOR LOOP
			i++;//INCREMENTS THROUGH THE STRING
		}
		for (int currentLetter = 0; currentLetter < counter; currentLetter++) {
			this->userMessage[currentLetter] ^= KEY;
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
