#include "playerFormat.h"

player::player(std::string name, std::string area, int level = 1, int Exp = 0)
{
  setName(name);
  setArea(area);
  setLevel(level);
  setExp(Exp);
  setExpRequired();
  setMaxHealth();
  setHealth(playerMaxHealth);
  setStrength();
  setConstitution();
  setPerception();
  setDexterity();
  setIntelligence();
  setWisdom();
}

