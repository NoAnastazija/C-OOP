#include <iostream>
#include "EventOrganizer.h"

void findEventsByLocation(Location location);

int main() {

    EventOrganizer organizer("Organizer", "www.organizer.com");

    Location home("Home", "Hedge 3", "London", "UK");
    Location grave("Grave", "The city of the death", "Graveyard", "World");

    Date a(30, 3, 1900);
    Date b(1, 3, 2000);

    Event visit(0, "Visit", 20, 15, &home, a, EventAgeGroup::All);
    std::cout << "Visit: " << visit.toString() << std::endl;

    std::cout << std::endl;
    Event death(1, "death", 100, 150, &grave, b, EventAgeGroup::Adult);
    std::cout << "Death: " << death.toString() << std::endl;

    organizer.addEvent(visit);
    organizer.addEvent(death);

     organizer.findEventsByLocation(grave);


    std::cout << "Organizer: " << organizer.toString() << std::endl;

    return 0;
}



