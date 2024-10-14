//
// Created by nogra on 18/05/2024.
//

#ifndef NALOGA0601_EVENT_H
#define NALOGA0601_EVENT_H

#include <iostream>
#include <cstring>
#include "Location.h"
#include "EventAgeGroup.h"
#include "Date.h"
#include "Sponsor.h"
// GENERAL - NASTAVITVENI - we have to:
/*
 * Event a("Ttitle", 13.56, 200);
 *
 * Default constructor we do it oourselves:
 * Event b;
 */
// Copy constructor
/*Event c(a);
 *
 */
/*
 * POINTERS
 * Event* a = new Event("Ttitle", 13.56, 200);
 * Event* b = new Event();
 * Event* b = new Event(a); -> i think
 */

using namespace std;

class Event {
protected:
    int id;
    string title;
    float price;
    unsigned int numTickets;
    // aggregation
    Location* location;
    // enum class
    EventAgeGroup ageGroup;
    //composition
    Date date;
    vector<Sponsor*> sponsors;
public:
    virtual ~Event();
    // const string& -> so it wont create another copy in memory
    Event(int id, const string& title, float price, unsigned int numTickets, Location* location, const Date &date, EventAgeGroup ageGroup);
    int getId();
    string getTitle();
    float getPrice();
    unsigned int getNumTickets();

    void setId(int id);
    void setTitle(const string& title);
    void setPrice(float price);
    void setNumTickets(unsigned int tickets);

    void print();
    bool sellTicket();

    virtual string toString();

    void addSponsor(Sponsor* sponsor);
};


#endif //NALOGA0601_EVENT_H
