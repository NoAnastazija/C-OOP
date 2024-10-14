//
// Created by nogra on 18/05/2024.
//

#ifndef NALOGA0601_SPONSOR_H
#define NALOGA0601_SPONSOR_H

#include <iostream>
#include <cstring>

using namespace std;

class Sponsor{
protected:
    string name;
    unsigned int yearsOfSponsorship;
public:
    Sponsor(const string &name, unsigned int yearsOfSponsorship);
    virtual ~Sponsor();
    virtual float calculateScore() const = 0;
    virtual string toString();
    virtual string getSponsorText() const = 0;


    string getName();
    unsigned int getYearsOfSponsorship();

    void setName(const string& name);
    void setYearsOfSponsorship(int title);
};


#endif //NALOGA0601_SPONSOR_H
