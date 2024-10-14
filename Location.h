//
// Created by nogra on 25/03/2024.
//

#ifndef NALOGA0401_NEW_LOCATION_H
#define NALOGA0401_NEW_LOCATION_H
#include <string>


class Location {
private:
    std::string name;
    std::string street;
    std::string city;
    std::string country;

public:
    Location(const std::string &name, const std::string &street, const std::string &city, const std::string &country);
    const std::string &getName() const;
    void setName(const std::string &name);
    const std::string &getStreet() const;
    void setStreet(const std::string &street);
    const std::string &getCity() const;
    void setCity(const std::string &city);
    const std::string &getCountry() const;
    void setCountry(const std::string &country);
    std::string toString() const;

    bool operator==(const Location &other) const;

};

#endif //NALOGA0401_NEW_LOCATION_H
