#include "utxo.h"

UTXO::UTXO(std::string id, std::string owner, double amount) {
    this->id = id;
    this->owner = owner;
    this->amount = amount;
}