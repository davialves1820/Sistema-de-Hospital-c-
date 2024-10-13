#include "Patient.h"

Patient::Patient(const string& n, int a, const string& c, const string& h_i) : Person(n, a, c), health_insurance(h_i) {}

void Patient::set_health(const string& h) {
    health_insurance = h;
}

string Patient::get_health() const {
    return health_insurance;
}

std::ostream& operator<<(std::ostream& out, const Patient& p) {
    out << "Name: " << p.get_name() << endl;
    out << "Age: " << p.get_age() << endl;
    out << "Health insurance: " << p.health_insurance;
    return out;
}

void Patient::show_info() const {
    cout << *this << endl;
}