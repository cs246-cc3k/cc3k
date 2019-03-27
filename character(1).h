#ifndef CHARACTER_H_
#define CHARACTER_H_
#include <iostream>
#include <vector>
#include <cstddef>
#include <string>
#include "info.h"
#include "cell.h"

class Character: public Cell {
	std::string name; 	 // The name/race of the character
	size_t row, col; 	 // Position on the board 
	bool isAlive;		  		 // Attributes of the character
	size_t HP, Atk, Def;

public:
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
};

#endif
