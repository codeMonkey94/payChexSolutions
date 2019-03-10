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
	unsigned int KEY = 11001100;//SHOULD BE AN int?
public:
	//CONSTRUCTORS:
	Encryption();
	Encryption(string, string);//PIN, MESSAGE
	//GETTERS:
	string getPin(void);
	string getMessage(void);
	//SETTERS:
	void setPin(string);	
	void setMessage(string);

//METHODS
	string cipherMessage();
	//TAKES THE USERMESSAGE AND ENCRYPTS IT
	//USES A BIT KEY
	//RETURNS THE USERMESSAGE ENCRYPTED 
	string decipherMessage();
	//TAKES THE ENCRYPTED USERMESSAGE AND DECIPHERS IT
	//USES A BIT KEY
	//RETURNS THE USERMESSAGE UN-ENCRYPTED 
	bool verifyPin(string);
	//VALIDATES USERS PIN
	//RETURNS TRUE IF ENTERED CORRECT
	//ELSE FALSE
};
#endif
