//
// Created by Max Benson on 8/7/2021.
//

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using std::ostream;
using std::string;

class Animal {
public:
    Animal(const string& name) {
        _name = name;
    }
    void Eat() const {
        cout << "   Animal::Eat(): All Animals eat" << "\n";
    }
    void Walk() const {
        cout << "   Animal::Walk(): Not all animals can walk" << '\n';
    }
    virtual void Fly() const {
        cout << "   Animal::Fly(): Not all animals can fly." << "\n";
    }
    friend ostream& operator<<(ostream& os, const Animal& animal) {
        os << "   " << "I am a(n) " << animal._name;
        return os;
    }
protected:
    string _name;
};


#endif //X1_INHERITANCE_ANIMAL_H
