#include "Consult.h"

Consult::Consult(Doctor* d, Patient* p) : doctor(d), patient(p) {
    // Gets the current time from the system clock
    auto now = std::chrono::system_clock::now();
    std::time_t current_time = std::chrono::system_clock::to_time_t(now);

    // Converts time to tm structure
    std::tm* local_time = std::localtime(&current_time);

    // Extrai a data
    data_time[0] = local_time->tm_mday;
    data_time[1] = local_time->tm_mon + 1;  // tm_mon goes from 0 to 11, so we add 1
    data_time[2] = local_time->tm_year + 1900;  // tm_year account since 1900

    // Extract the date
    data_time[3] = local_time->tm_hour;
    data_time[4] = local_time->tm_min;
    //int segundo = local_time->tm_sec;
}

void Consult::show_info() const {
    cout << "Consult" << endl;
    cout << "Doctor" << endl;
    cout << *doctor << endl;
    cout << "Patient" << endl;
    cout << *patient << endl;
    cout << "Data" << endl;
    cout << data_time[0] << "/" << data_time[1] << "/" << data_time[2] << endl;
    cout << "Hour: " << data_time[3] << ":" << data_time[4] << endl;
}