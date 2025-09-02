#include <iostream>
#include <stdlib.h>
#include "Animal.h"




Animal::Animal(std::string speciesName, unsigned int discoveryYear){
    species = speciesName;
    year_discovered = discoveryYear;
}

Animal::Animal() : species(""), year_discovered(0) {};

void Animal::display(){
    std::cout << species << " [" << year_discovered << "]" << std::endl;
}