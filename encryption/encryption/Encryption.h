#pragma once
#ifndef encrypto
#define _encrypt_
#include<string>
#include<iostream>
#include <cstring>
using namespace std;
class Encryption {
private:
	string userMessage;
	string userPin;
public:
	//CONSTRUCTORS:
	Encryption();
	Encryption(string, string);
	//GETTERS:
	string getPin(void);
	string getMessage(void);
	//SETTERS:
	void setPin(string);
	//void setpin();
	void setMessage(string);
	//void setMessage()
//METHODS
	string cipherMessage();
	string decipherMessage();
	bool verifyPin(string);
};
#endif
