#include "walletManager.h"

Wallet* createWallet(int value) {
    Wallet* wallet= new Wallet;
    wallet->septims = value;
    return wallet;
}

void destroyWallet(Wallet* wallet) {
    delete wallet;
}

Wallet* createWallets(int counts) {
    Wallet* wallet= new Wallet[counts];
    return wallet;
}

void destroyWallets(Wallet* wallet) {
    delete[] wallet;
}
