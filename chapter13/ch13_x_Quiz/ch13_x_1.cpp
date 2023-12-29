#include <iostream>

namespace MonsterData
{
    enum class MonsterType
    {
        ogre,
        dragon,
        orc,
        giantSpider,
        slime,
    };

    struct Monster
    {
        MonsterType monsterType{};
        std::string_view name;
        int health;
    };

    std::string_view getMonsterType(MonsterType type)
    {
        switch(type)
        {
            case MonsterType::ogre:
                return "ogre";
                break;
            case MonsterType::dragon:
                return "dragon";
                break;
            case MonsterType::orc:
                return "orc";
                break;
            case MonsterType::giantSpider:
                return "giant spider";
                break;
            case MonsterType::slime:
                return "slime";
                break;
            default:
                return "Invalid monster type!";
        }
    }

    void printMonster(const Monster& m)
    {
        std::cout << "The monster name is " << m.name;
        std::cout << " with type of " << getMonsterType(m.monsterType);
        std::cout << " and health of " << m.health << '\n';
    }
}


int main()
{
    using namespace MonsterData;
    Monster drogon{MonsterType::dragon, "Drogon", 9001};
    printMonster(drogon);
	Monster ogre{ MonsterType::ogre, "Torg", 145 };
	Monster slime{ MonsterType::slime, "Blurp", 23 };
    printMonster(ogre);
	printMonster(slime);

    return 0;
}








