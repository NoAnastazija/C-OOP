#include <iostream>
#include "Event.h"

using namespace std;

int main() {
    // Automatic allocation
    Event a("Coffee", 10.0, 50, "heh");
    Event b("Tea", 25.0, 22, "random");
    Event f("Water", 66.3, 44, "description");


    a.setPrice(4);

    a.print();
    b.print();
    f.print();

    // Dynamic allocation
    Event *c = new Event("Milk", 100.0, 100, "des");
    Event *d = new Event("Juice", 5.0, 30, "cri");
    Event *e = new Event("Choco", 150, 70, "ption");

    c->print();
    d->print();
    e->print();


    // Using methods and constructors
    Event g;
    g.setTitle("Milky");
    g.setPrice(2.6);
    g.setNumTickets(10);
    g.setDescription("Something");

    g.getTitle();
    g.getPrice();
    g.getNumTickets();
    g.getDescription();

    g.toString();
    g.print();


    // Deleting fo dynamic allocation
    delete c;
    delete d;
    delete e;

    return 0;
}