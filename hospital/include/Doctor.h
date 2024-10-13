#ifndef DOCTOR_H
#define DOCTOR_H

#include "Person.h"

// Derived class Doctor
class Doctor : public Person {
    string specialty;
    int years_experience;
public:
    // Constructor
    Doctor(const string& n, int a, const string& c, const string& s, int y);

    // Get and sets
    void set_specialty(const string& s);
    string get_specialty() const;

    void set_years(int y);
    int get_years() const;

    // Override abstract method
    void show_info() const override;

    // Overload operator <<
    friend std::ostream& operator<<(std::ostream& o, const Doctor& d);
};

#endif