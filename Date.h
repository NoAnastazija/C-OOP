//
// Created by nogra on 16/03/2024.
//

#include <iostream>
#include <cstring>
#include <vector>
#include <cstring>

#ifndef NALOGA0301_DATE_H
#define NALOGA0301_DATE_H

#endif //NALOGA0301_DATE_H

using namespace std;

class Date{
    // instančne spremeniljivke
private:
    int day;
    int month;
    int year;

    // Razredne spremenljivke
    // vsi objekti si delijo in lahko uporabljajo te spremenljivke
    static const vector<int> MaxDayByMonth;
    static const int MaxMonth;
    static int DaysInYear;

    // Javne metode
    // CONST za imenom funkcije je objekt funkcije, const pred funkcijo popmeni kaj funkcija vrača
public:
    Date();
    Date(int day, int month, int year);
    //explicit Date(int date);
    string toString() const;

    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

    // static functions doesnt have const (Neither do constructors)
    static bool isLeapYear(unsigned int year);
    static int getDaysInMonth(unsigned int day, unsigned int month, unsigned int year);
    static bool isDateValid(unsigned int day, unsigned int month, unsigned int year);
    static Date parse(string date);
};
