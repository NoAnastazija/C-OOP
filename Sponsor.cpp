#include "Sponsor.h"

//
// Created by nogra on 20/05/2024.
//
Sponsor::Sponsor(const std::string &name, unsigned int yearsOfSponsorship)
        : name(name), yearsOfSponsorship(yearsOfSponsorship) {
}

Sponsor::~Sponsor()= default;

string Sponsor::toString() {
    string result = "Event Information:\n";
    result += "Name: " + name + "\n";
    result += "Years of sponsorhip: " + to_string(yearsOfSponsorship) + "\n";
    return result;
}
std::string Sponsor::getName() {
    return name;
}

unsigned int Sponsor::getYearsOfSponsorship() {
    return yearsOfSponsorship;
}


void Sponsor::setName(const std::string &name) {
    this->name = name;
}

void Sponsor::setYearsOfSponsorship(int years) {
    this->yearsOfSponsorship = years;
}

