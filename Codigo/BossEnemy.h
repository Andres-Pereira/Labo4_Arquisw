#pragma once
#include <iostream>
#include "Enemy.h"
using namespace std;

class BossEnemy : public Enemy
{
public:
	BossEnemy() {
		health = 550;
	};

	~BossEnemy() {};

	int damageTaken() override {
		int damage = 40;
		health = health - damage;
		return damage;
	}
};