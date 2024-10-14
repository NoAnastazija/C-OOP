//
// Created by nogra on 20/05/2024.
//

#include <iostream>
#include "FinancialSponsor.h"

using namespace std;

FinancialSponsor::FinancialSponsor(const std::string &name, unsigned int yearsOfSponsorship, float moneyDonated, const std::string &bankAccount)
        : Sponsor(name, yearsOfSponsorship), moneyDonated(moneyDonated), bankAccount(bankAccount) {
}

// Calculate score
float FinancialSponsor::calculateScore() const {
    return ((0.7f * moneyDonated) + (0.3f * yearsOfSponsorship)) / (moneyDonated + yearsOfSponsorship);
}

// Convert to string
string FinancialSponsor::toString() {
    string result = "Financial Sponsor Information:\n";
    result += Sponsor::toString();
    result += "Money Donated: " + to_string(moneyDonated) + "\n";
    result += "Bank Account: " + bankAccount + "\n";
    return result;
}

string FinancialSponsor::getSponsorText() const {
    return "Sponsor " + name + " has already successfully donated eur " + to_string((moneyDonated)) + ".";
}