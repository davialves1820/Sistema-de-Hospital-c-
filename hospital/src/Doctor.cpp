#include "Doctor.h"

Doctor::Doctor(const string& n, int a, const string& c, const string& s, int y) : Person(n, a, c), specialty(s), years_experience(y) {}

void Doctor::set_specialty(const string& s) {
    specialty = s; 
}

string Doctor::get_specialty() const {
    return specialty;
}

void Doctor::set_years(int y) {
    years_experience = y;
}

int Doctor::get_years() const {
    return years_experience;
}

std::ostream& operator<<(std::ostream& out, const Doctor& d) {
    out << "Name: " << d.get_name() << endl;
    out << "Age: " << d.get_age() << endl;
    out << "Specialty: " << d.get_specialty() << endl;
    out << "Years experience: " << d.get_years();
    return out;
}

void Doctor::show_info() const {
    cout << *this << endl;
}