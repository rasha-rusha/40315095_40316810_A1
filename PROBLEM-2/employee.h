//
//
//  assignment_#1_Q2_COEN244
//
//  Created by Nadine on 2026-09-21.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>


class Employee {
private:
    std::string First_Name;
    std::string lastName;
    int Monthly_salary;
    
public:
    Employee(std::string firstName, std::string last_name, int monthlySalary); //main constructor
    
    Employee(const Employee& other);    //task 2.1: add the copy constructor
    ~Employee();                        //task 2.2: destructor
    
    void setFirstName(std::string firstName);
    void setLastName(std::string last_name);        //setters
    void setMonthlySalary(int monthlySalary);
    
    std::string getFirstName() const;
    std::string getLastName() const;                //getters
    int getMonthlySalary() const;

    
};


#endif
