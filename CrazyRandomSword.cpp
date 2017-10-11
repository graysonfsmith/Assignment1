#include "CrazyRandomSword.h"

double CommonSpear::hit(double armor) {
    int randhit, randig;
    randhit = rand() % 100 + 1;
    randig = rand() % static_cast<int>(armor/2);

    double damage = hitpoints - (armor - randig);

    if (damage < 0) {
        return 0;
    }
    return damage;
}