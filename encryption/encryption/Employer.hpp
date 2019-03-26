//
//  Employer.hpp
//  
//
//  Created by Darnell Hill on 3/26/19.
//

#ifndef _Employer_hpp
#define Employer

#include <iostream>
include "Employee.h"
using namespace std;
class Employer : Employee {//NOTE THAT EMPLOYEE INHERITS PERSON
protected: 
    string rank;
public:
    void setRank(string);
    string getRank();
};
#endif /* Employer_hpp */
