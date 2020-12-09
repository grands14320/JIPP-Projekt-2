#include <iostream>
#include "Hrms.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Hrms hrms;
    Employee employee0 = Employee("0", "foo0", "bar0", "0", "engineer");
    Employee employee1 = Employee("1", "foo1", "bar1", "0", "mechanic");
    Employee employee2 = Employee("2", "foo2", "bar2", "0", "librarian");
    Employee employee3 = Employee("3", "foo3", "bar3", "1", "historian");
    Employee employee4 = Employee("4", "foo4", "bar4", "1", "dentist");
    Employee employee5 = Employee("5", "foo5", "bar5", "1", "teacher");
    Employee employee6 = Employee("6", "foo6", "bar6", "2", "lawyer");
    Employee employee7 = Employee("7", "foo7", "bar7", "2", "professor");
    Employee employee8 = Employee("8", "foo8", "bar8", "2", "artist");
    Employee employee9 = Employee("9", "foo9", "bar9", "2", "painter");

    hrms.add(employee0, employee0.getDepartmentId(), 0);
    hrms.add(employee1, employee1.getDepartmentId(), 1000);
    hrms.add(employee2, employee2.getDepartmentId(), 2000);
    hrms.add(employee3, employee3.getDepartmentId(), 3000);
    hrms.add(employee4, employee4.getDepartmentId(), 4000);
    hrms.add(employee5, employee5.getDepartmentId(), 5000);
    hrms.add(employee6, employee6.getDepartmentId(), 6000);
    hrms.add(employee7, employee7.getDepartmentId(), 7000);
    hrms.add(employee8, employee8.getDepartmentId(), 8000);
    hrms.add(employee9, employee9.getDepartmentId(), 9000);

    hrms.printDepartment("2");

    hrms.printSalaries();
    std::cout <<std::endl;
    hrms.changeSalary("0", 500.0);
    std::cout <<"Changed salary" << std::endl;
    std::cout <<std::endl;
    hrms.printSalaries();
    std::cout <<std::endl;
    std::cout <<"Salaries sorted DESC";
    std::cout <<std::endl;
    hrms.printSalariesSorted();

    return 0;
}
