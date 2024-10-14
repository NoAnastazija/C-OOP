//
// Created by nogra on 25/03/2024.
//

#include "EventOrganizer.h"
#include <vector>


// Add a findEventsByLocation method to the EventOrganizer class that
// receives a location and returns a vector of events that will occur at that location.
vector<Event> EventOrganizer::findEventsByLocation(Location location) {
    vector<Event> eventsAtLocation;
    for (const Event &event : events) {
        if (event.location == location) {
            eventsAtLocation.push_back(event);
        }
    }
    return eventsAtLocation;

}




EventOrganizer::EventOrganizer(const std::string &name, const std::string &webAddress) {
    this->name = name;
    this->webAddress = webAddress;
}

string EventOrganizer::getName() const {
    return name;
}

string EventOrganizer::getWebAddress() const {
    return webAddress;
}

void EventOrganizer::setName(string name) {
    this->name = name;
}

void EventOrganizer::setWebAddress(string webAddress) {
    this->webAddress = webAddress;
}

void EventOrganizer::addEvent(const Event &event) {
    events.push_back(event);
}

void EventOrganizer::sellTicket(int eventId) {
    for (int i = 0; i < events.size(); i++) {
        if (events[i].getId() == eventId) {
            events[i].sellTicket();
        }
    }
}

string EventOrganizer::toString() {
    string eventsStr = "";
    for (int i = 0; i < events.size(); i++) {
        eventsStr = eventsStr + " " + events[i].toString();
    }
    string str = "Name: " + this->name + ", web address: " + this->webAddress + eventsStr;
    return str;
}