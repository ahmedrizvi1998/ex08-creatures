//
// Created by ahmed on 12/11/2018.
//

#ifndef EX08_CREATURES_DEMON_H
#define EX08_CREATURES_DEMON_H
#include<creature.h>
#include <string>
namespace edu { namespace vcccd { namespace vc { namespace csv13 {
    class Demon : public Creature {
    public:
        Demon(int strength, int hit): Creature(strength, hit){}
        int getDamage() const;




    };


}}}}
#endif //EX08_CREATURES_DEMON_H
