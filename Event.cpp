//
// Created by nogra on 08/05/2024.
//

#include <iostream>
#include "Event.h"

Event::~Event()= default;

Event::Event(int id, const string& title, float price, unsigned int numTickets, Location* location, const Date &date, EventAgeGroup ageGroup):id(id), title(title), price(price), numTickets(numTickets), location(location), date(date), ageGroup(ageGroup){
}

int Event::getId() {
    return id;
}

string Event::getTitle() {
    return title;
}

float Event::getPrice() {
    return price;
}

unsigned int Event::getNumTickets() {
    return numTickets;
}

void Event::setId(int id) {
    this->id = id;
}

void Event::setTitle(const string& title) {
    this->title = title;
}

void Event::setPrice(float price) {
    this->price = price;
}

void Event::setNumTickets(unsigned int tickets) {
    this->numTickets = tickets;
}

void Event::print() {
    cout << toString() << endl;
    /*cout<<endl;
    cout << title;
    cout << price;
    cout << numTickets;
    cout<<endl;*/
}

bool Event::sellTicket(){
    if(numTickets > 0){
        return true;
    }
    else
        return false;
}

string Event::toString() {
   /* return "Event: " + title + ", Price: " + to_string(price) + ", Tickets: " + to_string(numTickets) + ", Location: " +
           location->toString() + ", Date: " + date.toString() + ", Age Group: " + to_string(static_cast<int>(ageGroup));*/
    string result = "Event Information:\n";
    result += "Title: " + title + "\n";
    result += "Price: " + to_string(price) + "\n";
    result += "Tickets: " + to_string(numTickets) + "\n";
    result += "Location: " + location->toString() + "\n";
    result += "Date: " + date.toString() + "\n";
    result += "Age Group: " + to_string(static_cast<int>(ageGroup)) + "\n";
    return result;
}