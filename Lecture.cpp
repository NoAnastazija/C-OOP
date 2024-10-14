//
// Created by nogra on 18/05/2024.
//


#include "Lecture.h"

using namespace std;

Lecture::Lecture(int id, const string &title, float price, unsigned int numTickets, Location *location, const Date &date, EventAgeGroup ageGroup, const string &presenter, const string &topic): Event(id, title, price, numTickets, location, date, ageGroup), presenter(presenter), topic(topic){

};

string Lecture::toString(){
    string result1 = "Lecture Information:\n";
    result1 += "Title: " + title + "\n";
    result1 += "Price: " + to_string(price) + "\n";
    result1 += "Number of Tickets: " + to_string(numTickets) + "\n";
    result1 += "Location: " + location->toString() + "\n";
    result1 += "Date: " + date.toString() + "\n";
    result1 += "Age Group: " + to_string(static_cast<int>(ageGroup)) + "\n";
    result1 += "Presenter: " + presenter + "\n";
    result1 += "Topic: " + topic + "\n";
    return result1;
};
