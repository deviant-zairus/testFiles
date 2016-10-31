#include "playerFormat.h"

player::player(std::string name, std::string area, int level = 1, int Exp = 0)
{
  setName(name);
  setArea(area);
  setLevel(level);
  setExp(exp);
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

void player::setName(std::string name)
{
  playerName = name;
}
void player::setArea(std::string area)
{
  playerArea = area;
}
void player::setLevel(int level)
{
  playerLevel = level;
}
void player::setExp(int exp)
{
  playerExp = exp;
}
void player::setExpRequired(int expRequired)
{
  playerExpRequired = (123 * (1+getLevel()));
}
void player::setMaxHealth(int maxHealth)
{
  playerMaxHealth = (20 + (3 * getConstitution());
}
void player::setHealth(int health)
{
  playerHealth = health;
}
