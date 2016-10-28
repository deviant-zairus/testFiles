#ifndef "PLAYERFORMAT_H"
#define "PLAYERFORMAT_H"

#include <iostream>

struct Player
{
  Player(std::string, std::string, int, int, int, int, int, int, int, int, int);
  void setName(std::string);
  void setArea(std::string);
  void setLevel(int);
  void setExp(int);
  void setExpRequired(int);
  void setStrength(int);
  void setConstitution(int);
  void setIntelligence(int);
  void setWisdom(int);
  void setDexterity(int);
  void setPerception(int);

  std::string getName();
  std::string getArea();
  int getLevel();
  int getExp();
  int getExpRequired();
  int getStrength();
  int getConstitution();
  int getIntelligence();
  int getWisdom();
  int getDexterity();
  int getPerception();
};
 
#endif
