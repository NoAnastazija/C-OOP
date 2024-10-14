//
// Created by nogra on 25/03/2024.
//

#ifndef NALOGA0401_NEW_EVENTORGANIZER_H
#define NALOGA0401_NEW_EVENTORGANIZER_H

#include <string>
#include "Event.h"

using namespace std;


class EventOrganizer {
private:
    string name;
    string webAddress;
    // Composition 0..n need vector
    vector<Event> events;
public:
    EventOrganizer(const string &name, const string &webAddress);
    string getName() const;
    string getWebAddress() const;
    void setName(string name);
    void setWebAddress(string webAddress);
    void addEvent(const Event &event);
    void sellTicket(int eventId);
    string toString();
   // vector<Location> findEventsByLocation(Location(const std::string &name, const std::string &street, const std::string &city, const std::string &country));
   vector<Event> findEventsByLocation(Location location);
};

#endif //NALOGA0401_NEW_EVENTORGANIZER_H
