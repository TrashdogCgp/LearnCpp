#include <iostream>

//Should've just named this namespace Monster, not MonsterType
namespace MonsterType{
    enum MonsterType
    {
        orc,
        goblin,
        troll,
        ogre,
        skeleton
    };
}
int main()
{
    //Forgot to use brace initiation
    MonsterType::MonsterType redditCommentResident = MonsterType::troll;
    std::cout << "An aptly named troll has been instantiated. Value prints out as: " << redditCommentResident << '\n';
    return 0;   
}
