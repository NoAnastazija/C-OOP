#include <iostream>
#include "Event.h"
#include "EventOrganizer.h"
#include "Concert.h"
#include "Lecture.h"
#include "FinancialSponsor.h"


using namespace std;

int main() {

    EventOrganizer organizer("Matthew", "www.hehe.com");

    Location japan("Japan", "Japaneese street", "soemwhere", "Japan");
    Location london("Wedding", "Bacontree", "London", "UK");
    Location slovenia("BTS", "Ljubljanska cesta", "Ljubljana", "Slovenia");
    Location australia("Moving", "Auss stress", "Yay", "Australia");

    Date a(3, 5, 2024);
    Date b(12, 12, 2027);
    Date c(2, 10, 2025);
    Date d(20, 2, 2029);


    //Event *event1 = new Event(2, "Visit", 100, 2, &japan, a, EventAgeGroup::Adult);
    Event *event2 = new Event(5, "Moving", 3000, 2, &australia, d, EventAgeGroup::Adult);
    Concert *conc = new Concert(3, "Wedding", 1000, 2300, &london, b, EventAgeGroup::Adult, "Don't know any",ConcertType::Rock);
    Concert *concert = new Concert(4, "BTS", 350, 10000000, &slovenia, c, EventAgeGroup::Senior, "BTS",ConcertType::Pop);


    Event *nowevent = new Lecture(2, "Visit", 100, 2, &japan, a, EventAgeGroup::Adult, "Presenter", "Topic");


    //organizer.addEvent(event1);
    organizer.addEvent(conc);
    organizer.addEvent(concert);
    organizer.addEvent(event2);
    organizer.addEvent(nowevent);


    cout << organizer.toString() << endl;

    FinancialSponsor sponsor1("Jenny", 5, 100, "hehe");


   /* cout << sponsor1.toString() << endl;
    cout << "Score: " << sponsor1.calculateScore() << endl;
    cout << sponsor1.getSponsorText() << endl;*/


    sponsor1.setName("Jennny");
    sponsor1.setYearsOfSponsorship(10);


    cout << sponsor1.toString() << endl;
    cout << "Score: " << sponsor1.calculateScore() << endl;
    cout << sponsor1.getSponsorText() << endl;

    return 0;
}
