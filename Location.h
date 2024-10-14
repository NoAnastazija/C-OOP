//
// Created by nogra on 08/05/2024.
//

#include <string>

#ifndef NALOGA0501_LOCATION_H
#define NALOGA0501_LOCATION_H


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
};

#endif //NALOGA0501_LOCATION_H
