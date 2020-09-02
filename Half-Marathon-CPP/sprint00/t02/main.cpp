#include "walletManager.h"

int main(void) {
    Wallet* wallet = createWallet(10);
    std::cout << "I've got " << wallet->septims << " septims in wallet." << std::endl;
    destroyWallet(wallet);

    int amount = 5;
    Wallet* wallets = createWallets(amount);
    for (int i = 0; i < amount; i++) {
        wallets[i].septims = i * i;
        std::cout << i << " wallet: " << wallets[i].septims << " septims." << std::endl;
    }
    destroyWallets(wallets);
}
