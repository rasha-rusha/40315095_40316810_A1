//
//  employee.cpp
//  assignment_#1_Q2_COEN244
//
//  Created by Nadine on 2026-09-21.
//

#include "employee.h"


Employee::Employee(std::string firstName, std::string last_name, int monthlySalary)
    : First_Name(firstName), lastName(last_name), Monthly_salary(monthlySalary > 0 ? monthlySalary : 0) {
        //constructor with the member initialization list
}

Employee::Employee(const Employee& other)
        :First_Name(other.First_Name), lastName(other.lastName),Monthly_salary(other.Monthly_salary) {
        //implementing the copy constructor
}
    

Employee::~Employee() {
        //implementing the destructor
}

//setters
void Employee::setFirstName(std::string firstName) {
    First_Name = firstName;
}

void Employee::setLastName(std::string last_name) {
    lastName = last_name;
}

void Employee::setMonthlySalary(int monthlySalary) {
    Monthly_salary = (monthlySalary > 0) ? monthlySalary : 0; //using the ternary format as asked 
}


//getters
std::string Employee::getFirstName() const {
    return First_Name;
}

std::string Employee::getLastName() const {
    return lastName;
}

int Employee::getMonthlySalary() const {
    return Monthly_salary;
}
