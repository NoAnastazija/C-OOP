#include <iostream>
#include <cstring>
#ifndef NALOGA0201_EVENT_H
#define NALOGA0201_EVENT_H

#endif //NALOGA0201_EVENT_H

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
private:
    string title;
    float price;
    unsigned int numTickets;
    string description;
public:
    // Default constructor
    Event();
    //Constructor
    // const string& -> so it wont create another copy in memory
    Event(const string& title, float price, unsigned int numTickets, string description);

    string getTitle();
    float getPrice();
    unsigned int getNumTickets();
    string getDescription();
    void setTitle(const string& title);
    void setPrice(float price);
    void setNumTickets(unsigned int tickets);
    void setDescription(string description);
    string toString();
    void print();
};

