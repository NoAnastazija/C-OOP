//
// Created by nogra on 08/05/2024.
//

#include "EventOrganizer.h"
#include "Event.h"
#include <vector>

EventOrganizer::EventOrganizer(const string &name, const string &webAddress):name(name), webAddress(webAddress){};

EventOrganizer::~EventOrganizer() {
    for (Event* event : events) {
        delete event;
    }

    events.clear();
}

string EventOrganizer::getName(){
    return name;
}

string EventOrganizer::getWebAddress(){
    return webAddress;
}

void EventOrganizer::setName(const string& name){
    this->name = name;
}

void EventOrganizer::setWebAddress(const string& webAddress){
    this->webAddress = webAddress;
}

void EventOrganizer::addEvent(Event* event){
    events.push_back(event);
}

void EventOrganizer::sellTicket(int eventId){
    for (int i = 0; i < events.size(); i++) {
        if (events[i]->getId() == eventId) {
            events[i]->sellTicket();
        }
    }
}

string EventOrganizer::toString(){
    // Initialize the result string with organizer's name and web address
    string result = "Organizer: " + name + "\n";
    result += "Web Address: " + webAddress + "\n";

    // If there are no events, indicate that no events are scheduled
    if (events.empty()) {
        result += "No events scheduled\n";
    } else {
        // If there are events, list each event's information
        result += "Events:\n";
        for (Event* event : events) {
            result += event->toString() + "\n";
        }
    }

    return result;
}



