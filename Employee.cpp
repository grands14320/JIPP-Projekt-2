//
// Created by Admin on 07.12.2020.
//

#include "Employee.h"
#include <string>

Employee::Employee(std::string id, std::string name, std::string surname, std::string departmentId, std::string position) {
    this->id = id;
    this->name = name;
    this->surname = surname;
    this->departmentId = departmentId;
    this->position = position;
}

std::string Employee::getDepartmentId() {
    return this->departmentId;
}

std::string Employee::getId() {
    return this->id;
}


void Employee::prettyPrint() {
    std::cout <<  "{" << "id: "<< this->id << ", " <<"Name: " << this->name << ", " << "Surname: " << this->surname << ", " << "dep id: " << this->departmentId << ", " << "position: " << this->position << "}" <<std::endl;
}
