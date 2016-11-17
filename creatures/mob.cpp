#inlude "mob.h"
#include <iostream>

mob::mob(std::string name, std::string area, std::string special, int level, int expGiven, int health, int maxHealth, int strength, int constitution, int intelligence, int wisdom, int dexterity, int perception)
{
  std::string setName(name);
  std::string setArea(area);
  std::string setSpecial(special);
  int setLevel(level);
  int setExpGiven(expGiven);
  int setMaxHelth(maxHealth);
  int setHealth(maxHealth);
  int setStrength(strength);
  int setConstitution(constitution);
  int setPerception(perception);
  int setDexterity(dexterity);
  int setIntelligence(intelligence);
  int setWisdom(wisdom);
}

//member mutators
void mob::setName(std::string name)
{
  mobName = name;
}
void mob::setArea(std::string area)
{
  mobArea = area;
}
void mob::setSpecial(std::string special)
{
  mobSpecial = special;
}


