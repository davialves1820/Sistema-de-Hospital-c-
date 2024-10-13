#include "Hospital.h"


int main(void) {

    Patient* p1 = new Patient("Davi", 19, "12334434", "Unimed");
    Doctor* d1 = new Doctor("Valdetania", 50, "1456562", "Cardiologist", 12);
    Consult* c1 = new Consult(d1, p1);

    p1->show_info();
    d1->show_info();
    c1->show_info();

    return 0;
}