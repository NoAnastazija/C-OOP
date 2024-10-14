//
// Created by nogra on 18/05/2024.
//

#ifndef NALOGA0601_EVENTORGANIZER_H
#define NALOGA0601_EVENTORGANIZER_H



#include <iostream>
#include <vector>
#include "Event.h"

using namespace std;


class EventOrganizer{
private:
    string name;
    string webAddress;
    // cause composition 0..n
    vector<Event*> events;

public:
    EventOrganizer(const string &name, const string &webAddress);

    string getName();
    string getWebAddress();
    void setName(const string& name);
    void setWebAddress(const string& webAddress);

    ~EventOrganizer();
    void addEvent(Event* event);
    void sellTicket(int eventId);
    string toString();

};

#endif //NALOGA0601_EVENTORGANIZER_H
