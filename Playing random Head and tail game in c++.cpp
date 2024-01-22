#include <iostream>
#include <cstdlib>
#include <ctime>

class Coin {
public:
    Coin() {
        srand(time(0));
        sideUp = rand() % 2 == 0 ? "heads" : "tails";
    }

    void toss() {
        sideUp = rand() % 2 == 0 ? "heads" : "tails";
    }

    std::string getSideUp() const {
        return sideUp;
    }

private:
    std::string sideUp;
};

int main() {
    Coin coin;
    std::cout << "The initial side of the coin is: " << coin.getSideUp() << std::endl;
    coin.toss();
    std::cout << "After tossing the coin, the side facing up is: " << coin.getSideUp() << std::endl;
    return 0;
}
