#include "Hospital.h"

Hospital::Hospital(const string& n) : name(n) {}

void Hospital::add_patient(Patient* p) {
    patients.push_back(p);
}

void Hospital::add_doctor(Doctor* d) {
    doctors.push_back(d);
}

void Hospital::add_employee(Employee* e) {
    employees.push_back(e);
}

void Hospital::add_consult(Consult* p) {
    consults.push_back(p);
}

void Hospital::show_info() const {
    cout << "Hospital " << name << endl;
    cout << "Doctors" << endl;
    for (auto d = doctors.begin(); d != doctors.end(); d++) {
        cout << *(*d) << endl;
    }
    cout << "Employees" << endl;
    for (auto e = employees.begin(); e != employees.end(); e++) {
        cout << *(*e) << endl;
    }
}