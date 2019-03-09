#include "Person.h"

//CONSTRUCTORS:
Person::Person() {
	LastName = "LAST";
	FirstName = "FIRST";
	MiddleName = "MIDDLE";
	Age = 18;
	SSN = 999999999;
	Gender = 'F';

}
Person::Person(string last, string  first) {
	this->LastName = last;
	this->FirstName = first;
}
Person::Person(string last, string first, int age) {
	this->LastName = last;
	this->FirstName = first;
	this->Age = age;
}
//SETTERS:
void Person::setLastName(string last) {
	this->LastName = last;
}

void Person::setFirstName(string first) {
	this->FirstName = first;
}
void Person::setMiddleName(string middle) {
	this->MiddleName = middle;
}
void Person::setAge(int age) {
	this->Age = age;
}
void Person::setGender(char gender) {
	//NOTE THIS FUNCTION USES LOWER CASE VALUES
	// ENSURE THAT THE VALUES ARE BETEWEEN 97-122
	if (gender == 'f' || gender == 'm')
		this->Gender = gender;
}

//GETTERS:
string Person::getFirstName() {
	return this->FirstName;
}
string Person::getLastName() {
	return this->LastName;
}
string Person::getMiddleName() {
	return this->MiddleName;
}
char Person::getGender() {
	return this->Gender;
}
int Person::getAge() {
	return this->Age;
}
double Person::getSSN() {
	return this->SSN;
}

//METHODS:
void Person::displayPerson() {
	cout << LastName << ", " << FirstName << ", " << MiddleName << "--" << SSN;

}
Person Person::getPerson() {
	Person currentPerson;
	return currentPerson;
}


