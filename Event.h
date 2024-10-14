//
// Created by nogra on 25/03/2024.
//

#ifndef NALOGA0401_NEW_EVENT_H
#define NALOGA0401_NEW_EVENT_H

#include <string>
#include "EventAgeGroup.h"
#include "Date.h"
#include "Location.h"

using namespace std;


class Event {
private:
    unsigned int id;
    string title;
    float price;
    unsigned int numTickets;
    // composition of class Date
    Date date;
    EventAgeGroup ageGroup;
public:
    Event();
    Event(int id, const string &title, float price, unsigned int numTickets, const Date &date,
          EventAgeGroup ageGroup);

    const unsigned int getId();
    const string getTitle();
    const float getPrice();
    const unsigned int getNumTickets();
    void setId(unsigned int id);
    void setTitle(const string &title);
    void setPrice(float price);
    void setNumTickets(unsigned int tickets);
    bool sellTicket();
    const string toString();
    const void print();

// aggregation for class location
Location location;

    /*template<typename _StateT>
    const fpos<_StateT> &*getLocation();*/
};


#endif //NALOGA0401_NEW_EVENT_H
