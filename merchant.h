#ifndef MERCHANT_H_
#define MERCHANT_H_
#include "enemies.h"
#include <string>

class merchant:public enemies {
	bool ishostile;
 public:
 	Merchant(size_t row, size_t col);
    void attack(Pc &);
    void move();
    void makehostile();
    bool ishostile();
    ~Merchant(){};
}
#endif