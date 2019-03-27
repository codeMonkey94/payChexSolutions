#include "Employee.h"
using namespace std;
//CONSTRUCTORS:
Employee::Employee(){
    EmployeeID = 0.00;
    DOH = "01/01/2001";
    ShiftAssigned = shift1;
    PayRate = 0.00;
    Salary = 0.00;
    HoursWorked = 0.00;
    OTWorked = 0.00;
    LastName = "last";
    FirstName = "first";
    Age = 18;
}
Employee::Employee(string last, string first){
    
    LastName = last;
    FirstName = first;
}
Employee::Employee(string last, string first, double empID) {
	LastName = last;
	FirstName = first;
	EmployeeID = empID;
}
//SETTERS:
void Employee::setEmployeeID(double x){
    this->EmployeeID = x;
}
void Employee::setDOH(string doh){
    this->DOH = doh;
}
void Employee::setShiftWorked(shift currentShift){
    this->ShiftAssigned = currentShift;
}
void Employee::setPayRate(double pay){
    this->PayRate = pay;
}
void Employee:: setSalary(long double salary){
    this->Salary = salary;
}
void Employee::setHoursWorked(double hours){
    this->HoursWorked = hours;
}
void Employee::setOTWorked(double hours1){
    this->OTWorked = hours1;
}

//GETTERS:
double Employee::getEmployeeID(){
    return this->EmployeeID;
}
string Employee::getDOH(){
    return this->DOH;
}
shift Employee::getShiftWorked(){
    return this->ShiftAssigned;
}
double Employee::getPayRate(){
    return this->PayRate;
}
long double Employee::getSalary(){
    return this->Salary;
}
double Employee::getHoursWorked(){
    return this->HoursWorked;
}
double Employee::getOTWorked(){
    return this->OTWorked;
}
