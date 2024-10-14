//
// Created by nogra on 08/05/2024.
//

#ifndef NALOGA0501_CONCERT_H
#define NALOGA0501_CONCERT_H


#include <iostream>
#include "Event.h"
#include "ConcertType.h"

using namespace std;

class Concert: public Event{
private:
    string performer;
    ConcertType type;

public:
    Concert(int id,const string &title, float price, unsigned int numTickets, Location *location, const Date &date, EventAgeGroup, const string &performer, ConcertType type);
    string toString() override;
};

#endif //NALOGA0501_CONCERT_H

