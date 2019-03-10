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
	int messageLength = this->userMessage.length();//LENGTH OF THE STRING
	for (int currentLetter = 0; currentLetter < messageLength; currentLetter++)
	{
		userMessage[currentLetter] ^= KEY;//BITWISE XOR
	}
	return userMessage;//ENCRYPTED MSG
}
string Encryption::decipherMessage() {
	int messageLength = this->userMessage.length();//LENGTH OF THE STRING	
	for (int currentLetter = 0; currentLetter < messageLength; currentLetter++)
	{
		userMessage[currentLetter] ^= KEY;//BITWISE XOR
	}
	return userMessage;//ENCRYPTED MSG

	//ELSE RET ENCRYPTED MSG
	return this->userMessage;
}
bool Encryption::verifyPin(string pinAttempt) {
	if (this->userPin == pinAttempt) 
		return true;
	else 
		return false;
}
