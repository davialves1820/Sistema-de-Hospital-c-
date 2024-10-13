#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "Patient.h"
#include "Doctor.h"
#include "Employee.h"
#include "Consult.h"
#include <vector>

using std::vector;

class Hospital {
    string name; 
    vector<Patient*> patients;
    vector<Doctor*> doctors;
    vector<Employee*> employees;
    vector<Consult*> consults;
public:
    // Constructor
    Hospital(const string& n);
    
    void add_patient(Patient* p); // add patient to vector
    void add_doctor(Doctor* d); // add doctors to vector
    void add_employee(Employee* e); // add employees to vector
    void add_consult(Consult* c); // add consults to vector

    void show_info() const;
};

#endif