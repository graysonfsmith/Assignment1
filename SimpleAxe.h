#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/**
 * Defines the behavior of a Simple Axe (hitpoint = 60, ignores all armor 
 * if hitting less than 20 armor)
 */
class SimpleAxe : public Weapon {
public:

    SimpleAxe() : Weapon("Simple axe", 60.0) {
    }
    virtual ~SimpleAxe() {}; 
    virtual double hit(double armor);

};

#endif