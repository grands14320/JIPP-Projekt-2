//
// Created by Admin on 07.12.2020.
//

#include <iostream>
#include "Hrms.h"
#include "vector"
#include "algorithm"

void Hrms::add(Employee &employee, std::string departmentId, double salary) {
    this->employees.push_back(employee);
    this->addMapping(employee);
    this->salaries.push_back(Salary(employee.getId(), salary));
}

void Hrms::printDepartment(std::string id) {
    for( auto &el: this->departmentIdToEmployees[id]) {
        el.prettyPrint();
    }
}

void Hrms::changeSalary(std::string employeeId, double salary) {
    for (auto & el : this->salaries) {
        if (el.getEmployeeId() == employeeId) {
            el.setSalary(salary);
        }
    }
}

void Hrms::printSalaries() {
    for( auto &el: this->salaries) {
        std::cout << "{employeeId: " << el.getEmployeeId() << ", salary: " << el.getSalary() << "}" << std::endl;
    }
}

void Hrms::printSalariesSorted() {
    std::vector<Salary> sortedSalaries(this->salaries);
    std::sort(sortedSalaries.begin(), sortedSalaries.end(), [](Salary a, Salary b) {
        return a.getSalary() > b.getSalary();
    });
    //god forgive my sins v2
    for( auto &sortedSalary: sortedSalaries) {
        for (auto & employee : this->employees) {
            if (employee.getId() == sortedSalary.getEmployeeId()) {
                std::cout<<std::endl;
                std::cout << "{employeeId: " << sortedSalary.getEmployeeId() << ", salary: " << sortedSalary.getSalary() << "} ";
                std::cout<<"DATA: ";
                employee.prettyPrint();
            }
        }
    }
}

void Hrms::addMapping(Employee &employee) {
    if (this->departmentIdToEmployees.find(employee.getDepartmentId()) == this->departmentIdToEmployees.end()) {
        this->departmentIdToEmployees[employee.getDepartmentId()] = std::vector<Employee>();
        this->departmentIdToEmployees[employee.getDepartmentId()].push_back(employee);
    } else {
        this->departmentIdToEmployees[employee.getDepartmentId()].push_back(employee);
    }
}
