//
// Created by nogra on 18/05/2024.
//

#include "Concert.h"

Concert::Concert(int id, const string &title, float price, unsigned int numTickets, Location *location, const Date &date, EventAgeGroup, const string &performer, ConcertType type): Event(id, title, price, numTickets, location, date, ageGroup), performer(performer), type(type)  {
};



string Concert::toString(){
    string result = "Concert Information:\n";
    result += Event::toString();
    result += "Performer: " + performer + "\n";
    result += "Type: " + to_string(static_cast<int>(type)) + "\n";
    return result;
};