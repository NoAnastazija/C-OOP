#include <iostream>
#include "Date.h"

using namespace std;

int main() {

    // Automatic allocation
    Date a(12, 3, 2022);
    Date b(10, 30, 1990);


    cout<<"To string value: "<<a.toString()<<endl;


    Date defaultDate;
    cout<<"To string value: "<<defaultDate.toString()<<endl;

    // Dynamic allocation
    Date *c = new Date(3, 4, 2002);
    Date *d = new Date(7, 12, 199);
    Date *e = new Date(9, 7, 7777);

    cout<<"To string value: "<<c->toString()<<endl;


    // Using methods and constructors
    Date g, n;
    g.setDay(3);
    g.setMonth(30);
    g.setYear(2024);

    g.getDay();
    g.getMonth();
    g.getYear();
    g.toString();

    cout<<endl;
    cout<<"Is leap year: "<<Date::isLeapYear(2005)<<endl;
    cout<<"Days in month: "<<Date::getDaysInMonth(10,1,2000)<<endl;
    cout<<"Is date valid: "<<Date::isDateValid(10,12,199)<<endl;


    // Oblike niza
    Date z = Date::parse("12.3.2022");

    // Deleting fo dynamic allocation
    delete c;
    delete d;
    delete e;

    return 0;
}