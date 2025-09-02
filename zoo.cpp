#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal *animal3 = new Animal("Orangutan", 1970);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3->display();

   delete animal3;
   delete animal1;

   Animal animal4("Lion", 1929);
   AnimalsInZoo zoo(animal4);
   zoo.display();
   
}
