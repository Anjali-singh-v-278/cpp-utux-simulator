#ifndef UTXO_H
#define UTXO_H

#include <string>

struct UTXO {
    std::string id;
    std::string owner;
    double amount;

    UTXO(std::string id, std::string owner, double amount);
};

#endif