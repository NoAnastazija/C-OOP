//
// Created by nogra on 25/03/2024.
//
#include "Date.h"

const vector<unsigned int>Date::MaxDayByMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const unsigned int Date::MaxMonth = 12;
const unsigned int Date::DaysInYear = 365;

Date::Date() : day(1), month(1), year(1970) {}

Date::Date(unsigned int day, unsigned int month, unsigned int year) {
    if (month < 1 || month > MaxMonth || day < 1 || day > MaxDayByMonth[month - 1]) {
        // Default to 1/1/1970 if the provided date is invalid
        this->day = 1;
        this->month = 1;
        this->year = 1970;
    } else {
        this->day = day;
        this->month = month;
        this->year = year;
    }
}

Date::Date(const Date &d) : day(d.day), month(d.month), year(d.year) {}

string Date::toString() const {
    string str = to_string(this->day) + "." + to_string(this->month) + "." + to_string(this->year);
    return str;
}

unsigned int Date::getDay() const {
    return day;
}

unsigned int Date::getMonth() const {
    return month;
}

unsigned int Date::getYear() const {
    return year;
}

bool Date::isLeapYear(unsigned int year) {
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        return true;
    }
    else{
        return false;
    }
}

unsigned int Date::getDaysInMonth(unsigned int month, unsigned int year) {
    int days;
    // Global method (-1 cause our numbers start by 0)
    days = MaxDayByMonth[month - 1];
    if(month == 2 && ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        return 29;
    }
    return days;
}

bool Date::isDateValid(unsigned int day, unsigned int month, unsigned int year) {
    if (month < 1 || month > MaxMonth) {
        return false;
    }
    if (day < 1 || day > getDaysInMonth(month, year)) {
        return false;
    }
    return true;
}