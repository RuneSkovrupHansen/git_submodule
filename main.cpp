#include <iostream>

#include "character/character.hpp"

int main(int argc, char *argv[]) {
    Character c = Character();

    int new_character_level = 10;
    if (!c.set_level(new_character_level)) {
        std::cout << "Could not set character level" << std::endl;
        return 1;
    }

    std::string new_character_name = "A. Rousso";
    if (!c.set_name(new_character_name)) {
        std::cout << "Could not set character name" << std::endl;
        return 1;
    }

    std::cout << c << std::endl;
    return 0;
}