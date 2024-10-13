#ifndef CONSULT_H
#define CONSULT_H

#include "Patient.h"
#include "Doctor.h"
#include <chrono>
#include <ctime>

// Composition class between Patient and Doctor
class Consult {
    Doctor* doctor;
    Patient* patient;
    int data_time[5]; // Position 0 = day, 1 = month, 2 = year, 3 = hour, 4 = minutes
public:
    // Constructor
    Consult(Doctor* d, Patient* p);

    void show_info() const;
};

#endif
