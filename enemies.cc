#include "enemies.h"
using namespace std;


Enemies:: Enemies(std::string name, size_t row, size_t col, size_t hp, size_t atk, size_t def,size_t g):
   Character(name, row, col, hp, atk, def), gold{g} {
   	hascompass = false;
 }

int Eneimes:: getgold() {
	return gold;
}

void Enemies::setcompass() {
	hascompass = true;
}

bool Enemies:: iscompass() {
   return hascompass;
}

Eneimes:: ~Enemies() {}