#ifndef ENEMIES_H_
#define ENEMIES_H_
#include "character.h"
#include <cstddef>
#include <string>
class Enemies:public character {
	size_t gold;
	bool hascompass;
 
 public:
 	Enemies(std::string name, size_t row, size_t col, size_t hp, size_t atk, size_t def,size_t g);
    virtual void attack(Pc &);
    virtual void move();
    virtual void beattacked(pc &) = 0;
    int getgold();
    void setcompass();
    bool iscompass();
    virtual ~Enemies();
}
#endif