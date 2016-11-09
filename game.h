#include "player.h"
#include "mob.h"

class Game
{
public:
   void Run
   {
     Initialize();
     while (_running)
       Frame();
     Shutdown();
   }
private:
  void Initialize() 
  {
    
  }
  void Shutdown()
  {
    
  }
  void Frame() 
  {
  
  }
  bool _running = true;
    
    
