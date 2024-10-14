#include <iostream>
#include "Event.h"

Event::Event() : title(""), price(0.0f), numTickets(0), description(""){}

// TODO fix
Event::Event(const string& title, float price, unsigned int numTickets, string description):title(title), price(price), numTickets(numTickets), description(description){

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

string Event::getDescription(){
    return description;
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

void Event::setDescription(string description) {
    this->description = description;
}

string Event::toString() {
    return "Event: " + title + ", Price: " + to_string(price) + ", Tickets: " + to_string(numTickets) + ", Description: " + description;
}

void Event::print() {
    cout << toString() << endl;
    /*cout<<endl;
    cout << title;
    cout << price;
    cout << numTickets;
    cout<<endl;*/
}

