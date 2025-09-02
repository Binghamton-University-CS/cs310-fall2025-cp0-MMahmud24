#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo(Animal a) {
    numAnimals = 1;
    animal = a;
}

AnimalsInZoo::AnimalsInZoo() {
    numAnimals = 0;
}

void AnimalsInZoo::display() {
    std::cout << numAnimals << std::endl;
    if (numAnimals > 0) {
        animal.display();
    }
}

