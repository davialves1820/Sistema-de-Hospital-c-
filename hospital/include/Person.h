#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// Abstract class Person
class Person {
    string name;
    int age;
    string cpf;
public:
    // Constructor of person
    Person(const string& n, int a, const string& c);
    
    // Gets and sets
    void set_name(const string& n);
    string get_name() const;

    void set_age(int a);
    int get_age() const;

    void set_cpf(const string& c);
    string get_cpf() const;

    // Pure virtual methods
    virtual void show_info() const = 0;

    // Operator overload ==
    bool operator==(const Person& p);
};

#endif