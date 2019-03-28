#include "pc.h"

//protected:
void PC::attack(Vampire &) {}
void PC::attack(Troll &) {}
void PC::attack(Goblin &) {}
void PC::attack(Merchant &) {}
void PC::attack(Dragon &) {}
void PC::attack(Phoenix &) {}

void PC::beAttacked(Enemy &) {}

void PC::setGold(size_t n) {}

void PC::usePotion(const Potion &p) {}

void PC::pickUpGold(const Treaasure &t) {}


//public:
void addAction(std::string s) { action += s; }			// For displaying message below the board

string PC::getAction() { return action; }

char PC::getOriginalSymbol() {return originalSymbol; }

size_t PC::getRow() { return PC::getRow(); }
size_t PC::getCol() { return PC::getCol(); }
std::string PC::getRace() { return PC::getRace(); ;

void PC::move(size_t x, size_t y) {	//add dir????

}

size_t PC::getGold() {	// pass a param????  (Treasure &t)
	return gold;
}

Info PC::info getAttribute() {} // get Atk????



bool PC::isDead() {
	isAlive = 0;
}

};

