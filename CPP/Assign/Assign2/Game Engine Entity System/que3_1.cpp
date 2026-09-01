//============================================================================
// Name        : que3_1.cpp
// Author      : Shravani
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Entity{


private:

	string name, type;
	int health, level;


public:

	//setters
	Entity& setName(const string& name){
		this->name = name;
		return *this;
	}

	Entity& setHealth(int health){
		this->health = health;
		return *this;
	}

	Entity& setLevel(int level){
		this->level = level;
		return *this;
	}

	Entity& setType(const string& type){
		this-> type = type;
		return *this;
	}

	//getters
	string getName() const {
		return name;
	}

	int getHealth() const {
		return health;
	}

	int getLevel() const {
		return level;
	}

	string getType() const {
		return type;
	}

	//display
	void displayInfo() const {
		cout << "Name : " << name << endl;
		cout << "Health : " << health << endl;
		cout << "Level : " << level << endl;
		cout << "Type : " << type << endl;
	}
};



int main() {

	//objects
	Entity player, enemy, item;

	player.setName("Shravani").setHealth(500).setLevel(8).setType("Player");

	enemy.setName("Dragon").setHealth(5000).setLevel(80).setType("Enemy");

	item.setName("Potion").setHealth(0).setLevel(1).setType("Item");

	player.displayInfo();
	cout << endl;
	enemy.displayInfo();
	cout << endl;
	item.displayInfo();

	return 0;
}
