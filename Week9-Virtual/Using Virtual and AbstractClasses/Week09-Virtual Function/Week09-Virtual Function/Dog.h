#pragma once
#include "Animal.h"
namespace sdds {
    class Dog : public Animal {
        int size;
        
    public:
        Dog(const char* name = "Charlie",int s = 3);
        void act();
        void move();
        void sound();
        void play();
      
        ~Dog();
    };
}

