#include <iostream>
#include <vector>
#include <algorithm>
#include "utxo.h"
#include "transaction.h"

std::vector<UTXO> utxoPool;

void showBalance(const std::string& owner) {
    double balance = 0.0;

    for (const auto& utxo : utxoPool) {
        if (utxo.owner == owner) {
            balance += utxo.amount;
        }
    }

    std::cout << "Balance of " << owner << ": " << balance << std::endl;
}

int main() {
    std::cout << "=== UTXO Simulator ===" << std::endl;

    return 0;
}