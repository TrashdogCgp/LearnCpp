#include <iostream>

enum class Animal{
    pig,
    chicken, 
    goat,
    cat,
    dog,
    duck,
};

std::string_view getAnimalName(Animal animal)
{
    switch(animal)
    {
        case Animal::pig:
            return "pig";
        case Animal::chicken:
            return "chicken";
        case Animal::goat:
            return "goat";
        case Animal::cat:
            return "cat";
        case Animal::dog:
            return "dog";
        case Animal::duck:
            return "duck";
        default:
            return "Error: unknown animal";
    }
}

void printNumberOfLegs(Animal animal)
{
    std::cout << "A " << getAnimalName(animal) << " has " ;
    switch(animal)
    {
        case Animal::pig:
            std::cout << 4;
            break;
        case Animal::chicken:
            std::cout << 2;
            break;
        case Animal::goat:
            std::cout << 4;
            break;
        case Animal::cat:
            std::cout << 4;
            break;
        case Animal::dog:
            std::cout << 4;
            break;
        case Animal::duck:
            std::cout << 2;
            break;
        default:
            std::cout << "Invalid animal somehow\n";
    }
    std::cout << " legs\n";
}

int main()
{
    Animal chicken {Animal::chicken};
    Animal cat {Animal::cat};
    printNumberOfLegs(chicken);
    printNumberOfLegs(cat);
    return 0;
}





