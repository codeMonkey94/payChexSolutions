#pragma once
//  Created by Darnell Hill on 3/26/19.
//

#ifndef _Employer_
#define _Employer_
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;
class Employer : Employee {//NOTE THAT EMPLOYEE INHERITS PERSON
protected:
	string Rank;
public:
	Employer();
	Employer(string, string);//LAST, FIRST
	void setRank(string);
	string getRank();
};
#endif 











