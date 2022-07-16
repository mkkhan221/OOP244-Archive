#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
#include "Animalia.h"
namespace sdds {
    class Animal
    {
        char m_name[41];
    public:
        Animal(const char* name = "Nameless");
        const char* name()const;
        // for ensuring recent implementation being called using dynamic binding
        void name(const char* value);
      
        void act();
        void move();
        void sound();
        ~Animal();
       
    };
 
    extern bool debug;
}
#endif
