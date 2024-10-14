//
// Created by nogra on 25/03/2024.
//

#ifndef NALOGA0401_NEW_DATE_H
#define NALOGA0401_NEW_DATE_H


#include<iostream>
#include<vector>

using namespace std;

class Date {
private:
    unsigned int day;
    unsigned int month;
    unsigned int year;
    static const vector<unsigned int> MaxDayByMonth;
    static const unsigned int MaxMonth;
    static const unsigned int DaysInYear;
public:
    Date();
    Date(const Date &d);
    Date(unsigned int day, unsigned int month, unsigned int year);
    string toString() const;
    unsigned int getDay() const;
    unsigned int getMonth() const;
    unsigned int getYear() const;
    static bool isLeapYear(unsigned int year);
    static unsigned int getDaysInMonth(unsigned int month, unsigned int year);
    static bool isDateValid(unsigned int day, unsigned int month, unsigned int year);

};


#endif //NALOGA0401_NEW_DATE_H
