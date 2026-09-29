//
//  testEmployee.cpp
//  assignment_#1_Q2_COEN244
//
//  Created by Nadine on 2026-09-24.
//

#include <iostream>
#include <string>
#include "employee.h"
using namespace std;


void testEmployeeCapabilities() {
    cout << "Testing class Employee" << endl;

    //employee objects
    Employee emp1("Nadine", "Mazloum", 5000); //random employee (ex. me)
    Employee emp2("Sarah", "Tremblay", 7000); //another employee

    //negative salary testing
    Employee empNegative("Zoey", "Lee", -500);
    cout << "Negative Salary Test: $" << empNegative.getMonthlySalary() << " (Expected: $0)" << endl;
    
    cout << "\nDisplay employees and their salaries: " << endl;

    //yearly salaries before 10% increase
    cout << emp1.getFirstName() << " " << emp1.getLastName() << "  => Yearly Salary: $" << emp1.getMonthlySalary() * 12 << endl;
    cout << emp2.getFirstName() << " " << emp2.getLastName() << "  => Yearly Salary: $" << emp2.getMonthlySalary() * 12 << endl;

    //raise salaries by 10% to both employees
    emp1.setMonthlySalary(static_cast<int>(emp1.getMonthlySalary() * 1.10)); //the set function will modify the value for the 10% increase
    emp2.setMonthlySalary(static_cast<int>(emp2.getMonthlySalary() * 1.10)); //same here but for the other employee

    //output the salaries after raise
    cout << "\nAfter 10% Raise:" << endl;
    cout << emp1.getFirstName() << " " << emp1.getLastName() << "  => Yearly Salary: $" << emp1.getMonthlySalary() * 12 << endl; //multiply monthly salary by 12 (to get the yearly salary)
    cout << emp2.getFirstName() << " " << emp2.getLastName() << "  => Yearly Salary: $" << emp2.getMonthlySalary() * 12 << endl;
    

    //testing the copy constructor
    Employee empCopy(emp1);
    cout << "\nTesting the copy constructor => Name: " << empCopy.getFirstName() << ", Monthly Salary: $" << empCopy.getMonthlySalary() << endl;
}

    double testMedianEmployeeSalary() {
 
    const int size = 50;
        Employee* employees[size]; // Array of Employee objects (via pointers)

        // Populate array with Employee objects
        for (int i = 0; i < size; ++i) {
            int salary = 1000 + (i * 100);
            employees[i] = new Employee("Emp" + to_string(i), "Test", salary);
            }

    // Sort the Employee objects using bubble sort
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (employees[j]->getMonthlySalary() > employees[j + 1]->getMonthlySalary()) {
                        Employee* temp = employees[j];
                        employees[j] = employees[j + 1];
                        employees[j + 1] = temp;
                    }
                }
            }

    // Calculate median using the Employee objects
        double median = 0.0;
        if (size % 2 == 0) {
        median = (employees[size / 2 - 1]->getMonthlySalary() + employees[size / 2]->getMonthlySalary()) / 2.0;
            } else {
                median = employees[size / 2]->getMonthlySalary();
            }

            // Clean up allocated memory
            for (int i = 0; i < size; ++i) {
                delete employees[i];
            }

    cout << "Calculated median salary for " << size << " employees: $" << median << endl;
    

    return median;
}

int main() {
    testEmployeeCapabilities();
    testMedianEmployeeSalary(); //execution of both tests

    return 0;
}
