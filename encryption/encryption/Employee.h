#pragma once
#ifndef _EMPLOYEE_
#define _EMPLOYEE_
#include "Person.h"
using namespace std;


class Employee :Person {
	//THIS CLASS IS DERIVED FROM THE 
	//PERSON CLASS THERE ARE ADDITIONAL
	//METHODS THAT AN EMPLOYEE HAS THAT
	//THE PERSON CLASS DOES NOT IMPLEMENT
protected:
	double EmployeeID;
	string DOH;//DATE OF HIRE MM/DD/YYYY
//	ShiftWorked;//ENUM OF SHIFTS AVAILABLE 
	double PayRate;//HOURLY RATE
	long double Salary;//ANNUAL 
	double HoursWorked;
	double OTWorked;//RATE * 1.5

public:
	//CONSTRUCTORS:
	Employee(string, string);
	//LAST, FIRST 
	//METHOD CREATES INSTANCE OF PERSON CLASS
	Employee(string, string, double);
	//LAST, FIRST, EMPLOYEEID
	//METHOD CREATES INSTANCE OF PERSON CLASS

	//SETTERS:

	//GETTERS:
	//METHODS:

};
#endif
