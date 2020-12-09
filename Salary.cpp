//
// Created by Admin on 07.12.2020.
//

#include "Salary.h"

Salary::Salary(std::string employeeId, double salary) {
    this->employeeId = employeeId;
    this->salary = salary;
}

std::string Salary::getEmployeeId() {
    return this->employeeId;
}

double Salary::getSalary() {
    return this->salary;
}

void Salary::setSalary(double salary) {
    this->salary = salary;
}
