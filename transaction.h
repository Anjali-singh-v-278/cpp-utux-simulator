#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <vector>
#include <string>
#include "utxo.h"

struct Transaction {
    std::vector<std::string> inputIDs;
    std::vector<UTXO> outputs;

    Transaction(std::vector<std::string> inputs, std::vector<UTXO> outputs);
};

#endif