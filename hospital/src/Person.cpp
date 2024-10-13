#include "Person.h" 

Person::Person(const string& n, int a, const string& c) : name(n), age(a), cpf(c) {}

void Person::set_name(const string& n) {
    name = n;
}

string Person::get_name() const {
    return name;
}

void Person::set_age(int a) {
    age = a;
}

int Person::get_age() const {
    return age;
}

void Person::set_cpf(const string& c) {
    cpf = c;
}

string Person::get_cpf() const {
    return cpf;
}

bool Person::operator==(const Person& p) {
    return (cpf == p.cpf);
}