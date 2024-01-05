#include "Random.h"
#include <iostream>

class Monster
{
    //See Google style guide for order of declaration within class
    //https://google.github.io/styleguide/cppguide.html#Declaration_Order
public:
    enum Type
    {
        dragon,
        goblin,
        ogre,
        orc,
        skeleton,
        troll,
        vampire,
        zombie,
        max_monster_types
    };



private:
    Type m_type{};
    std::string m_name{};
    std::string m_roar{};
    int m_hitpoints{};

public:
    Monster(Type type, const std::string_view name, const std::string_view roar, int hitpoints)
        : m_type{type}
        , m_name{name}
        , m_roar{roar}
        , m_hitpoints{hitpoints}
        {       }

    constexpr static std::string_view getTypeString(Type monsterType)
    {
        switch(monsterType)
        {
            case dragon:
                return "dragon";
            case goblin:
                return "goblin";
            case orc:
                return "orc";
            case skeleton:
                return "skeleton";
            case troll:
                return "troll";
            case vampire:
                return "vampire";
            case zombie:
                return "zombie";
            default:
                return "???";
        }
    }

    void print()
    {
        std::cout << m_name << " the " << getTypeString(m_type);
        if(m_hitpoints > 0)
        {
            std::cout << " has " << m_hitpoints << " hitpoints and says " << m_roar <<'\n';
        }
        else
        {
            std::cout << " is dead\n";
        }
    }
};

namespace MonsterGenerator
{
    const int nameParamCount{5};
    const int roarParamCount{5};
    std::string_view getName(int num)
    {
        switch(num)
        {
            case 0:
                return "Scooter";
            case 1:
                return "Weave";
            case 2:
                return "Wile";
            case 3:
                return "Tech";
            case 4:
                return "Grau";
            default:
                return "Yapper?";
        }
    }
    std::string_view getRoar(int num)
    {
        switch(num)
        {
            case 0:
                return "Yip";
            case 1:
                return "Yap";
            case 2:
                return "Yorp";
            case 3:
                return "Yowl";
            case 4:
                return "AAAAAaaaaaAAAAaaaa";
            default:
                return "Blip?";
        }
    }
    Monster generate()
    {
        return Monster{
            static_cast<Monster::Type>(Random::get(0,Monster::max_monster_types-1)),
            getName(Random::get(0, nameParamCount-1)),
            getRoar(Random::get(0, roarParamCount-1)),
            Random::get(1,100)
            };
    }
}


int main()
{
	Monster m{ MonsterGenerator::generate() };
	m.print();

	return 0;
}

