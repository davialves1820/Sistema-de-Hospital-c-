#ifndef PATIENT_H
#define PATIENT_H   

#include "Person.h"

// Person derived class
class Patient : public Person {
    string health_insurance;
public:
    // Constructor of Patient
    Patient(const string& n, int a, const string& c, const string& h_i);

    // Gets and sets
    void set_health(const string& h);
    string get_health() const;

    // Override abstract methods
    void show_info() const override;

    // Overload operator <<
    friend std::ostream& operator<<(std::ostream& o, const Patient& p);
};

#endif