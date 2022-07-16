#include <iostream>
using namespace std;
#include "Dog.h"
namespace sdds {
    Dog::Dog(const char* thename, int s) :Animal(thename), size(s) {
       char species[31]{0};
       setSpecies("Dog"); 
        getSpecies(species);
        if (sdds::debug) cout << "as a "<< species <<" with" << size << " height" << endl;
    }
    void Dog::act() {
        cout << "Act playful, " << name() << " the Dog" << endl;
    }
    void Dog::move() {
        cout << "Move like " << name() << " the Dog" << endl;
    }
    void Dog::sound() {
        Animal::sound();
        cout << "Wuff!" << endl;
    }
    void Dog::play() {
        cout << name() << " the Dog is playing!" << endl;
    }
   
  
    Dog::~Dog() {
        if (sdds::debug) cout << "Removing " << name() << " the Dog" << endl;
    }

}