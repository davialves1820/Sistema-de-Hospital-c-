#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

// Derived class Employee
class Employee : public Person {
    string charge;
    double salary;
public:
    // Constructor
    Employee(const string& n, int a, const string& c, const string& ch, double s);

    // Gets and sets
    void set_charge(const string& ch);
    string get_charge() const;

    void att_salary(double s);
    double get_salary() const; // Updates the employee's salary.

    // Override abstract method
    void show_info() const override;

    // Overload operator <<
    friend std::ostream& operator<<(std::ostream& out, const Employee& e);
};

#endif