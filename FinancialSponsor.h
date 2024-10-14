//
// Created by nogra on 20/05/2024.
//

#ifndef NALOGA0601_FINANCIALSPONSOR_H
#define NALOGA0601_FINANCIALSPONSOR_H

#include <iostream>
#include "Sponsor.h"

using namespace std;

class FinancialSponsor:public Sponsor{
private:
    float moneyDonated;
    string bankAccount;
public:
    FinancialSponsor(const string &name, unsigned int yearsOfSponsorship, float moneyDonated, const string &bankAccount);
    float calculateScore() const override;
    string toString() override;
    string getSponsorText() const override;

};

#endif //NALOGA0601_FINANCIALSPONSOR_H
