#pragma once


#include "Items.h"

#include "Exeptions.h"

#include "Ray.h"
#include "Blade.h"
#include "HealingPoltion.h"
#include "Shield.h"
#include "Mirror.h"

enum class HeroType
{
	Warrior,
	Mage,
	Archer
};
class PlayerCharacter
{
protected:
	string name;
	string userName;
	int HP;
	int maxHP;
	int damage;
	int level;
	HeroType heroType;
public:
	string ConvertHeroTypeToString();
	vector<bool> usingItems = { false,false,false,false,false };
	PlayerCharacter(string n,string un, HeroType ht);
	PlayerCharacter(string n, string un, int h,int max, int d, int l , HeroType ht);
	const string& getName() const;
	const string& getUserName() const;
	const HeroType& getHeroType() const;
	const int& getHP() const;
	const int& getMaxHP() const;
	const int& getDamage() const;
	const int& getLevel() const;
	virtual void setHeroType(HeroType ht);
	void setHP(int hp);
	void setMaxHP(int maxHp);
	void setDamage(int d);
	void setLevel(int l);
	virtual int Attack(PlayerCharacter& P);
	virtual void TakeDamage(PlayerCharacter& P,int attack);
	void Print();
	virtual int Speshal(int a)=0;
	virtual ~PlayerCharacter() = default;
};

