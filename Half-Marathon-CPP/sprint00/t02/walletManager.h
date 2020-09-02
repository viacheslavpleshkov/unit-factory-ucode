#ifndef WALLET_MANAGER_H_
#define WALLET_MANAGER_H_

#include <iostream>

struct Wallet {
    int septims;
};

Wallet* createWallet(int value);
void destroyWallet(Wallet* wallet);
Wallet* createWallets(int counts);
void destroyWallets(Wallet* wallets);

#endif  // WALLET_MANAGER_H_