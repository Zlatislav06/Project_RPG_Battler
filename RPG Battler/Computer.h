#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <memory>

#include <algorithm>
#include "PlayerCharacter.h"
#include "Items.h"
#include "Mage.h"
#include "Archer.h"
#include "Warrior.h"
#include "HealingPoltion.h"
#include "Blade.h"
#include "Mirror.h"
#include "Ray.h"
#include "Shield.h"
#include "Exeptions.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
class Computer
{
private:
	string name;
	vector<std::unique_ptr<PlayerCharacter>> characters;
	vector<std::unique_ptr<Items>> items;
public:
	Computer(string n, vector<std::unique_ptr<PlayerCharacter>> c, vector<std::unique_ptr<Items>> i);
	Computer(string n);
	const string& getName() const;
	const vector<std::unique_ptr<PlayerCharacter>>& getCharacters() const;
	const vector<std::unique_ptr<Items>>& getItems() const;
	void setName(const string& n);
	void addCharacter(const std::unique_ptr<PlayerCharacter>& P);
	void addItem(const std::unique_ptr<Items>& item);
	void addItems(const std::unique_ptr<Items>& item, int count);
	void use(std::unique_ptr<Items> item, PlayerCharacter& P);
};

