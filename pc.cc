#ifndef PLAYCHARACTER_H_
#define PLAYCHARACTER_H_
#include <iostream>
#include <vector>
#include <cstddef>
#include "observer.h"
#include "info.h"

class Cell;
class PC: public Character {
	char originalSymbol;	// Denotes the char on the board before this tile is occupied by player ('@')
	std::string action;
protected:
	virtual void attack(Vampire &) = 0;
	virtual void attack(Werewolf &) = 0;
	virtual void attack(Troll &) = 0;
	virtual void attack(Goblin &) = 0;
	virtual void attack(Merchant &) = 0;
	virtual void attack(Dragon &) = 0;
	virtual void attack(Phoenix &) = 0;
	virtual void beAttacked(Enemy &) = 0;
	virtual void setGold(size_t n) = 0;
	virtual void usePotion(const Potion &p) = 0;
	virtual void pickUpGold(const Treaasure &t) = 0;
public:
	void addAction(std::string s); 			// For displaying message below the board
	string getAction();
	char getOriginalSymbol();
	size_t getRow() override;
	size_t getCol() override;
	std::string getRace();
	
	void move(size_t x, size_t y);
	size_t getGold();
	Info info getAttribute();
	Bool isDead();
};

#endif
