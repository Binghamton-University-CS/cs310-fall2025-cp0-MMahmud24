#include <string>

class Animal{
    public:
        Animal(std::string speciesName, unsigned int discoveryYear){
            species = speciesName;
            year_discovered = discoveryYear;
        }

        Animal();

        void display();

    private:
        std::string species = "";
        unsigned int year_discovered = 0;

}