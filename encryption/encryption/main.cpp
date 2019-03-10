#include<iostream>
#include"Encryption.h"
#include"Employee.h"
#include"Encryption.h"

using namespace std;
int main(void) {
//TESTING ENCRYPTION CLASS:
	Encryption *Tester = new Encryption("1001","HELLO EVERYONE THIS IS A TEST.");
	cout << "THE CURRENT MESSAGE: " << Tester->getMessage() << endl;
	Tester->cipherMessage();
	cout << "THE ENCRYPTED MESSAGE: " << Tester->getMessage() << endl;
	if (Tester->verifyPin("1001")) {
		Tester->decipherMessage();
		cout << "THE ORIGINAL MESSAGE: " << Tester->getMessage() << endl;
	}
	else
		cerr << "INVALID PIN:" << endl << Tester->getMessage();
	cout << "******************************************" << endl;
	cout << "******************************************" << endl;

//TESTING PERSON CLASS:
	Person *person = new Person("Green","Erica", 27);
	person->setGender('f');
	person->setMiddleName("Domonique");
	person->setSSN(123456789);
	person->displayPerson();
	system("pause");
	return 0;
}

