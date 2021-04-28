#pragma once
#include "EnemyDecorator.h"


class LeatherArmorDecorator : public EnemyDecorator
{
public:
	LeatherArmorDecorator(Enemy* Enemy1) :EnemyDecorator(Enemy1) {

	}
	int damageTaken() {
		int damage = this->Enemy1->damageTaken() - 5;
		Enemy1->health = Enemy1->health - damage;
		return damage;
	}

};