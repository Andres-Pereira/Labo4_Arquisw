#pragma once
#include <iostream>
#include "Enemy.h"
using namespace std;

class CommonEnemy : public Enemy
{
public:
	CommonEnemy() {
		health = 250;
	};
	~CommonEnemy() {};

	int damageTaken() override {
		int damage = 70;
		health = health - damage;
		return damage;
	}
};