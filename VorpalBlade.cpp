#include "VorpalBlade.h"

double CommonSpear::hit(double armor) {
    double damage
    if(armor = hitPoints)
    	damage = (4 * hitPoints) - armor;
    if (armor > hitPoints)
    {
    	damage = (2 * hitpoints) - armor;
    }
    else 
    	damage = hitPoints - armor;


    if (damage < 0) {
        return 0;
    }
    return damage;
}