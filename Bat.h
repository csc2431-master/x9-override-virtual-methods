//
// Created by Max Benson on 8/7/2021.
//

#ifndef BAT_H
#define BAT_H

#include "animal.h"

class Bat : public Animal {
public:
    Bat(const string& name)
        : Animal(name) {
    }
    // This is VIRTUAL method of Animal which we are overriding
    void Fly() const override {
        cout << "   Bat::Fly() [overridden-virtual-method]: I can fly!" << '\n';
    }
    // This is a method that the Animal class doesn't have
    void EchoLocate() const {
        cout << "   Bat::EchoLocate() [Bat-specific-method]: I can echo locate too!" << "\n";
    }
};


#endif //BAT_H
