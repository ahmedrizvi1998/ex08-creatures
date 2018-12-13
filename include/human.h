//
// Created by ahmed on 12/11/2018.
//

#ifndef EX08_CREATURES_HUMAN_H
#define EX08_CREATURES_HUMAN_H
#include<creature.h>
#include <string>
namespace edu { namespace vcccd { namespace vc { namespace csv13 {


    class Human : public Creature{
    public:
        Human(int strength, int hit): Creature(strength, hit){}
        //int getDamage() const;
        const std::string &getSpecies() const;


    private:


        const std::string species = "Human";
    };
}}}}
#endif //EX08_CREATURES_HUMAN_H
