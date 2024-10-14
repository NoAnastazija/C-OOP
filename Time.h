//
// Created by nogra on 03/06/2024.
//

#ifndef NALOGA0801_TIME_H
#define NALOGA0801_TIME_H


#include <iostream>

class Time {
private:
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;

public:
    Time();
    Time(unsigned int hours, unsigned int minutes, unsigned int seconds);
    Time(const Time &time);

    unsigned int getHours() const;
    void setHours(unsigned int hours);
    unsigned int getMinutes() const;
    void setMinutes(unsigned int minutes);
    unsigned int getSeconds() const;
    void setSeconds(unsigned int seconds);

    unsigned int toSeconds() const;

    std::string toString() const;
};


#endif //NALOGA0801_TIME_H
