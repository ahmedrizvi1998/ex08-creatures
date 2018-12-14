//
// Created by ahmed on 12/11/2018.
//

#include <iostream>
#include <creature.h>
#include <string>
#include <demon.h>
using namespace std;
namespace edu { namespace vcccd { namespace vc { namespace csv13 {

        int Demon::getDamage() const {
            int damage = Creature::getDamage();
            if((rand() % 100) < 5) {
                damage = damage + 50;
                cout << "Demonic attack inflicts 50" << "additional damage points!" << endl;
                return damage;
            }
             else {
                return damage;
            }
     }










        }}}}
