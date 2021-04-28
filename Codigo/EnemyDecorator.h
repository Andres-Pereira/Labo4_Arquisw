#pragma once
#include <iostream>
#include "Enemy.h"
using namespace std;

class EnemyDecorator : public Enemy
{
protected:
	Enemy* Enemy1;
public:
	EnemyDecorator(Enemy* enemy) {
		Enemy1 = enemy;
	}

	int damageTaken() override
	{
		return Enemy1->damageTaken();
	};

};
