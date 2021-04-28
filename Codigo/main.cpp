#include <iostream>
#include"Enemy.h"
#include"CommonEnemy.h"
#include "BossEnemy.h"
#include "GoldArmorDecoratorh.h"
#include "LeatherArmorDecorator.h"
using namespace std;
int main() {
	

	Enemy* commonEnemy = new CommonEnemy;

	//Armadura de cuero 
	Enemy* LeatherEnemy = new LeatherArmorDecorator(commonEnemy);

	//Armadura de oro
	Enemy* GoldenEnemy = new GoldArmorDecorator(commonEnemy);

	//Pruebas de armadura
	cout << "Cuando nos ataca sin armadura: " << commonEnemy->damageTaken() << endl;
	cout << "Cuando nos ataca con la armadura de cuero: " << LeatherEnemy->damageTaken() << endl;
	cout << "Cuando nos ataca con la armadura de oro: " << GoldenEnemy->damageTaken() << endl;

	
	Enemy* Boss = new BossEnemy;

	//Armadura de cuero
	Enemy* LeatherBoss = new LeatherArmorDecorator(Boss);

	//Armadura de oro
	Enemy* GoldBoss = new GoldArmorDecorator(Boss);

	cout << "Cuando nos ataca sin armadura: " << Boss->damageTaken() << endl;
	cout << "Cuando nos ataca con la armadura de cuero: " << LeatherBoss->damageTaken() << endl;
	cout << "Cuando nos ataca con la armadura de oro: " << GoldBoss->damageTaken() << endl;


	getchar();
}