//
// Created by nogra on 13/05/2024.
//

#ifndef NALOGA0501_LECTURE_H
#define NALOGA0501_LECTURE_H

#include <iostream>
#include "Event.h"


using namespace std;

class Lecture: public Event{
private:
    string presenter;
    string topic;

public:
    Lecture(int id, const string &title, float price, unsigned int numTickets, Location *location, const Date &date, EventAgeGroup ageGroup, const string &presenter, const string &topic);
    string toString() override;
};

#endif //NALOGA0501_LECTURE_H
