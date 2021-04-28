#pragma once
#include "EnemyDecorator.h"


class GoldArmorDecorator : public EnemyDecorator
{
public:
	GoldArmorDecorator(Enemy* Enemy1) :EnemyDecorator(Enemy1) {

	}
	int damageTaken() {
		int damage = this->Enemy1->damageTaken() - 15;
		Enemy1->health = Enemy1->health - damage;
		return damage;
	}

};
