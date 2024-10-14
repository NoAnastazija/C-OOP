#include <iostream>
#include <vector>
#include "Date.h"

const vector<int> Date::MaxDayByMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int Date::MaxMonth = 12;
int Date::DaysInYear = 365;


// iniciaizacijska lista so te ::
Date::Date() : day(0), month(0), year(0){}

int Date::getDay() const{
    return day;
}
int Date::getMonth() const{
    return month;
}
int Date::getYear() const{
    return year;
}

void Date::setDay(int day){
    this->day = day;
}
void Date::setMonth(int month){
    this->month = month;
}
void Date::setYear(int year){
    this->year = year;
}

Date::Date(int day, int month, int year) {
    if (!isDateValid(day, month, year)) {
        this->day = 1;
        this->month = 1;
        this->year = 1970;
    } else {
        this->day = day;
        this->month = month;
        this->year = year;
    }
}

// const se objekt po klicu ne spremeni
string Date::toString() const{
    return to_string(day) + "." + to_string(month) + "." + to_string(year);
}

bool Date::isLeapYear(unsigned int year){
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        return true;
    }
    else{
        return false;
    }
}

int Date::getDaysInMonth(unsigned int day, unsigned int month, unsigned int year){
    int days;
    if(isLeapYear(year) && month -1 == 2){
        return 29;
    }
    // Global method (-1 cause our numbers start by 0)
    days = MaxDayByMonth[month - 1];
    return days;
}

bool Date::isDateValid(unsigned int day, unsigned int month, unsigned int year){
    if (month < 1 || month > MaxMonth)
        return false; // Invalid month

    int maxDays = getDaysInMonth(day, month, year);
    if (day < 1 || day > maxDays)
        return false; // Invalid day

    return true;
}

Date Date::parse(string date){
   // Date token = new Date(date);
    /*string delimeter = ".";
    string token = date.substr(0, date.find(delimeter));
    token= token + "." + date.erase(0, date.find(delimeter) + delimeter.length());
    cout<<token;*/

    string delimeter = ".";
    string token = date.substr(0, date.find(delimeter));
    string token2 =  date.erase(0, date.find(delimeter) + delimeter.length()) ;
    token2 = token2.substr(0, token2.find("."));
    string token3 = date.erase(0, date.find(delimeter) + delimeter.length());

    cout<<token<<endl;
    cout<<token2<<endl;
    cout<<token3<<endl;

    int dayy = stoi(token);
    int monthh = stoi(token2);
    int yearr = stoi(token3);
    //parse(token);
    //token = (int)token;
    //int myint1 = stoi(token);
    return Date(dayy, monthh, yearr);
}

