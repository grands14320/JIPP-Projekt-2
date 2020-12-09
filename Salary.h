//
// Created by Admin on 07.12.2020.
//

#ifndef PROJEKT_2_JIPP_SALARY_H
#define PROJEKT_2_JIPP_SALARY_H

#include <string>

class Salary {
private:
    std::string employeeId;
    double salary;

public:
    Salary(std::string employeeId, double salary);
    std::string getEmployeeId();
    double getSalary();
    void setSalary(double salary);
};

#endif //PROJEKT_2_JIPP_SALARY_H
