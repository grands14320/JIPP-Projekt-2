//
// Created by Admin on 07.12.2020.
//

#ifndef PROJEKT_2_JIPP_HRMS_H
#define PROJEKT_2_JIPP_HRMS_H

#include <string>
#include <vector>
#include "Employee.h"
#include "map"
#include "Salary.h"
#include "list"

class Hrms {
private:
    std::vector<Employee> employees;
    std::map<std::string, std::vector<Employee>> departmentIdToEmployees;
    std::vector<Salary> salaries;
    void addMapping(Employee &employee);

public:
    void add(Employee &employee, std::string departmentId, double salary);
    void printDepartment(std::string id);
    void changeSalary(std::string employeeId, double salary);
    void printSalaries();
    void printSalariesSorted();
};


#endif //PROJEKT_2_JIPP_HRMS_H
