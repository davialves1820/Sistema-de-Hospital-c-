#include "Employee.h"

Employee::Employee(const string& n, int a, const string& c, const string& ch, double s) : Person(n, a, c), charge(ch), salary(s) {}

void Employee::set_charge(const string& ch) {
    charge = ch;
}

string Employee::get_charge() const {
    return charge;
}

void Employee::att_salary(double s) {
    salary = s;
}

double Employee::get_salary() const {
    return salary;
}

std::ostream& operator<<(std::ostream& out, const Employee& e) {
    out << "Name: " << e.get_name() << endl;
    out << "Age: " << e.get_age() << endl;
    out << "Charge: " << e.get_charge() << endl;
    out << "Salary: " << e.get_salary();
    return out;
}

void Employee::show_info() const {
    cout << *this << endl;
}