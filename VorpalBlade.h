#include <string>
#include "Weapon.h"

#ifndef VORPALBLADE_H
#define VORPALBLADE_H

/**
 * Defines the behavior of a vorpal blade, a weapon that does more damage if the target
 *  has more armor than the hitpoints of the weapon(15)
 * 
 * does massive damage if the target has same armor as the weapon has hitpoints
 */
class VorpalBlade : public Weapon {
public:

    VorpalBlade() : Weapon("Vorpal blade", 15.0) {
    }
    virtual ~VorpalBlade() {}; 
    virtual double hit(double armor);

};

#endif