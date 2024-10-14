//
// Created by nogra on 25/03/2024.
//
#include "Event.h"
#include <string>
#include <iostream>

using namespace std;

/*Event::Event() : id(0), title(""), price(0), numTickets(0), location(nullptr), date(),
                 ageGroup() {} */

Event::Event(int id, const string &title, float price, unsigned int numTickets, const Date &date,
             EventAgeGroup ageGroup) : date(date) {
    this->id = id;
    this->title = title;
    this->price = price;
    this->numTickets = numTickets;
    //this->location = location;
    this->ageGroup = ageGroup;
}

/*const string Event::getLocation(){
    return location;
}*/

const unsigned int Event::getId() {
    return id;
}

const string Event::getTitle() {
    return title;
}

const float Event::getPrice() {
    return price;
}

const unsigned int Event::getNumTickets() {
    return numTickets;
}

void Event::setId(unsigned int id) {
    this->id = id;
}

void Event::setTitle(const string &title) {
    this->title = title;
}

void Event::setPrice(float price) {
    this->price = price;
}

void Event::setNumTickets(unsigned int tickets) {
    this->numTickets = numTickets;
}

bool Event::sellTicket() {
    if (this->numTickets > 0) {
        this->numTickets--;
        return true;
    } else {
        return false;
    }
}

const string Event::toString() {
    string str = "Id: " + to_string(this->id) + ", title: " + this->title + ", price: " + to_string(this->price) +
                 ", number of tickets: " + to_string(this->numTickets) + ", location: " + this->location->toString() +
                 ", date: " + this->date.toString()+", age group: "+ to_string(static_cast<int>(this->ageGroup))+".";
    return str;
}

const void Event::print() {
    cout << toString();
}
