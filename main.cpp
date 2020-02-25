#include <iostream>
#include "die.h"
int main() {
    Die die1 = Die(12, 1, 2,"Blue", false, "Plastic");

    int roll1 = die1.roll();
    std::cout << "ROLL 1 IS " << roll1 << std::endl;
    isWin(roll1);
    return 0;
}
