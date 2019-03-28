#include "merchant.h"
#include <cmath>
#include <cstdlib>
Merchant:: Merchant(size_t row, size_t col): Enemies("Merchant", row, col, 30, 70, 5, 0) {}

void Merchant:: attack(Pc& p) {
   if (!ishostile) {
      return;
   }
   bool isbsuit = p.isBarriersuit();
   size_t def = p.getDef();
   size_t atk = this->getAtk();
   int hp = p.getHP();
   int i = rand() % 2;
   if (i = 0) {
   	return;
   }
   size_t damage = ceiling((100/(100 + def)) * atk);
   if (isbsuit) {
   	 hp = hp - damage / 2;
   } else {
   	 hp = hp - damage;
   }
   if (hp < 0) {
   	 	p.setHP(0);
   	 	p.setlive(false);
   } else {
   	 	p.setHP(hp);
   }
}

void Merchant:: beattacked(Pc & p) {
   p.attack(*this);
}
void Merchant:: move(string:: str) { 
   if (str == "no") {
      row = row - 1;
   } else if (str == "so") {
      row = row + 1;
   } else if (str == "ea") {
      col = col + 1;
   } else if (str == "we") {
      col = col - 1;
   } else if (str == "ne") {
      row =  row - 1;
      col = col + 1;
   } else if (str == "nw") {
      row = row - 1;
      col = col - 1;
   } else if (str == "se") {
      row = row + 1;
      col = col + 1;
   } else {
      row = row + 1;
      col = col - 1;
   }
}

void Merchant:: makehostile() {
   ishostile = true;
}

bool Merhcant:: ishostile() {
   return ishostile;
}