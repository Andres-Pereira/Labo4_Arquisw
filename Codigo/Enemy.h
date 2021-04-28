#pragma once
#include <iostream>
using namespace std;
class Enemy
{
public:
	virtual int damageTaken() = 0;
	int health;
};
