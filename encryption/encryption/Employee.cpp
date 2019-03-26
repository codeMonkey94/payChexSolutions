#include "Employee.h"

using namespace std;
//CONSTRUCTORS:
Employee::Employee(){
    EmployeeID = 0.00;
    DOH = "01/01/2001";
    ShiftAssigned = 1;
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
//SETTERS:
void Employee::Employee setEmployeeID(double x){
    this->EmployeeID = x;
}
void Employee::Employee setDOH(string doh){
    this->DOH = doh;
}
void Employee::Employee setShiftWorked(enum shift){
    this->ShiftAssigned = shift;
}
void Employee::Employee setPayRate(double pay){
    this->PayRate = pay;
}
void Employee:: Employee setSalary(long double salary){
    this->Salary = salary;
}
void Employee::Employee set HoursWorked(double hours){
    this->HoursWorked = hours;
}
void Employee::Employee setOTWorked(double hours1){
    this->OTWorked = hours1;
}
//GETTERS:
double Employee::Employee getEmployeeID(){
    return this->EmployeeID;
}
string Employee::Employee getDOH(){
    return this->DOH;
}
enum Employee::Employee getShiftWorked(){
    return this->ShiftAssigned;
}
double Employee::Employee getPayRate(){
    return this->PayRate;
}
long double Employee:: Employee getSalary(){
    return this->Salary;
}
double Employee::Employee getHoursWorked(){
    return this->HoursWorked;
}
double Employee::Employee getOTWorked(){
    return this->OTWorked;
}
