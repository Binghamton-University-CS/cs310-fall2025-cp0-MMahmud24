#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include <string>
#include "Animal.h"

class AnimalsInZoo {
    public:
        AnimalsInZoo(Animal a);

        AnimalsInZoo();
        
        void display();

    private:
        int numAnimals;
        Animal animal;
};

#endif