//
// Created by Admin on 07.12.2020.
//

#ifndef PROJEKT_2_JIPP_EMPLOYEE_H
#define PROJEKT_2_JIPP_EMPLOYEE_H


#include <string>
#include <iostream>

class Employee {
private:
    std::string id;
    std::string name;
    std::string surname;
    std::string departmentId;
    std::string position;

public:
    Employee(std::string id, std::string name, std::string surname, std::string departmentId, std::string position);
    std::string getId();
    std::string getName();
    std::string getSurname();
    std::string getDepartmentId();
    std::string getPosition();
    void prettyPrint();
};



#endif //PROJEKT_2_JIPP_EMPLOYEE_H
