#include "character.h"
using namespace std;
Character(std::string name, size_t row, size_t col, size_t HP, size_t Atk, size_t Def);
	void setposition(size_t x, size_t y);
	size_t getRow();
	size_t getCol();
	size_t getHP();
	size_t getAtk();
	size_t getDef();
	void setHP(size_t HP);
	void setAtk(size_t Atk);
	void setDef(size_t Def);
	virtual void move();
	std::string getName();
	void setlive(bool a);
  	bool isDead();