#include "transaction.h"

Transaction::Transaction(std::vector<std::string> inputs, std::vector<UTXO> outputs) {
    this->inputIDs = inputs;
    this->outputs = outputs;
}