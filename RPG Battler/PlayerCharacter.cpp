#include "PlayerCharacter.h"
#include "Help.h"

PlayerCharacter::PlayerCharacter(string n, string un, HeroType ht)
{
	name = n;
	userName = un;
	switch (ht)
	{
		case HeroType::Warrior:
		{
			HP = WHP;
			break;
		}
		case HeroType::Mage:
		{
			HP = MHP;
			break;
		}
		case HeroType::Archer:
		{
			HP = ARHP;
			break;
		}
			
		default:
			break;
	}
	setHeroType(ht);
}
PlayerCharacter::PlayerCharacter(string n, string un, int h, int max, int d, int l, HeroType ht)
{
	name = n;
	userName = un;
	setMaxHP(max);
	setHeroType(ht);
	setHP(h);
	setLevel(l);
	setDamage(d);
}
const string& PlayerCharacter::getName() const
{
	return name;
}
const string& PlayerCharacter::getUserName() const
{
	return userName;
}
const HeroType& PlayerCharacter::getHeroType() const
{
	return heroType;
}
const int& PlayerCharacter::getHP() const
{
	return HP;
}
const int& PlayerCharacter::getDamage() const
{
	return damage;
}
const int& PlayerCharacter::getMaxHP() const
{
	return maxHP;
}
const int& PlayerCharacter::getLevel() const
{
	return level;
}
void PlayerCharacter::setHeroType(HeroType ht)
{
	switch (ht)
	{
		case HeroType::Warrior:
		{
			heroType = ht;
			break;
		}
		case HeroType::Mage:
		{
			heroType = ht;
			break;
		}
		case HeroType::Archer:
		{
			heroType = ht;
			break;
		}
		default:
		{
			throw Exceptions("Invalid hero type!");
			break;
		}
			
	}
}
void PlayerCharacter::setHP(int hp)
{
	if (hp>0)
	{
		HP = hp;
	}
	else
	{
		HP = 0;
	}
}
void PlayerCharacter::setMaxHP(int maxHp)
{
	if (maxHp > 0)
	{
		maxHP = maxHp;
	}
	else
	{
		throw Exceptions("The max HP of cheracter can't be a less then zero or zero!");
	}
}
void PlayerCharacter::setDamage(int d)
{
	if (d >= 0)
	{
		damage = d;
	}
	else
	{
		throw Exceptions("the max damage of cheracter can't be a less then zero or zero!");
	}
}
void PlayerCharacter::setLevel(int l)
{
	if (l > 0)
	{
		level = l;
	}
	else
	{
		throw Exceptions("the level of cheracter can't be a less then zero or zero!");
	}
}
string PlayerCharacter::ConvertHeroTypeToString()
{
	string hType = "";
	switch (heroType)
	{
		case HeroType::Warrior:
		{
			hType = "Warrior";
			break;
		}
		case HeroType::Mage:
		{
			hType = "Mage";
			break;
		}
		case HeroType::Archer:
		{
			hType = "Archer";
			break;
		}
		default:
		{
			throw Exceptions("Invalid value!!!");
			break;
		}
	}
	return hType;
}

void PlayerCharacter::Print()
{
	string hType = ConvertHeroTypeToString();
	cout << "The hero also called " << name << " have this status:" << endl;
	cout << "Class:" << hType << endl;
	cout << "HP:" << HP << endl;
	cout << "Damage: 1-" << damage << endl;
	cout << "Level: " << level << endl;
}
int PlayerCharacter::Attack(PlayerCharacter& P) { return 1; }
void PlayerCharacter::TakeDamage(PlayerCharacter& P, int attack){ }
