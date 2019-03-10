#pragma once
#ifndef _Person_
#define Person_
#include <string>
#include <iostream>
using namespace std;
class Person {
protected:
	string LastName;
	string FirstName;
	string MiddleName;
	int Age;
	char Gender;
	long double SSN;

public:
	//CONSTRUCTORS:
	Person();
	//OVERLOADED LAST, FIRST
	Person(string, string);
	//OVERLOADED LAST, FIRST, AGE
	Person(string, string, int);

	//SETTERS:
	void setLastName(string x);
	void setFirstName(string x);
	void setMiddleName(string x);
	void setGender(char i);
	void setAge(int y);
	void setSSN(long double y);

	//GETTERS:
	string getLastName();
	string getFirstName();
	string getMiddleName();
	char getGender();
	int getAge();
	long double getSSN();

	Person getPerson();
	//RETURNS PERSON INFO IN A PERSON OBJECT
	//USE IN LUE OF CALLING ALL GETTERS

	//METHODS:
	void displayPerson();
	//PRINTS THE CURRENT PERSON'S INFO
	//TO CONSOLE

};
#endif
