#include "Help.h"
//for class PlayerCharacter
string ConvertVectorToString(vector<bool> v, int size)
{
	string inf1 = "";
	for (int i = 0; i < size; i++)
	{
		if (v[i] == true)
		{
			inf1 += "1";
		}
		else
		{
			inf1 += "0";
		}
	}
	return inf1;
}
string ToLower(string str)
{

	string tolowerString = "";
	for (int i = 0; i < str.size(); i++)
	{
		tolowerString += tolower(str[i]);
	}
	return tolowerString;
}
int FromCharToNumber(char a)
{
	switch (a)
	{
	case '1':
	{
		return 1;
		break;
	}
	case '2':
	{
		return 2;
		break;
	}
	case '3':
	{
		return 3;
		break;
	}
	case '4':
	{
		return 4;
		break;
	}
	case '5':
	{
		return 5;
		break;
	}
	case '6':
	{
		return 6;
		break;
	}
	case '7':
	{
		return 7;
		break;
	}
	case '8':
	{
		return 8;
		break;
	}
	case '9':
	{
		return 9;
		break;
	}
	case '0':
	{
		return 0;
		break;
	}
	default:
	{
		throw Exceptions("Invalid value!!!");
	}
	}
}
int Power(int number, int power)
{
	int sum = 1;
	for (int i = 0; i < power; i++)
	{
		sum *= number;
	}
	return sum;
}
vector<bool> CastFromStringToVector(string str, int attackSize)
{
	int index = 0;
	vector<bool> v = { false,false,false,false,false };
	for (int i = attackSize + 1; i < str.size(); i++)
	{
		if (str[i] == '1')
		{
			v[index] = true;
		}
		else if (str[i] == '0')
		{
			v[index] = false;
		}
		else
		{
			break;
		}
		index++;
	}
	return v;
}
int CastFromStringToAttack(string str, int& attackSize)
{
	int attack = 0;
	int index = 0;
	while (str[index] != ';')
	{
		index++;
	}
	attackSize = index;

	for (int i = 0; i < attackSize; i++)
	{
		attack += FromCharToNumber(str[i]) * Power(STEPEN, attackSize - i - 1);
	}
	return attack;
}
int CastFromStringToVectorOrAttack(string str, vector<bool>& boolVector)
{
	int attackSize = 0;
	int attack = CastFromStringToAttack(str, attackSize);
	boolVector = CastFromStringToVector(str, attackSize);
	return attack;

}

void ConsoleClear()
{
	system("cls");
}
//For User
bool DoYouHaveThisItem(const vector<std::unique_ptr<Items>>& items, std::unique_ptr<Items>& item)
{

	bool check = false;
	for (const std::unique_ptr<Items>& x : items)
	{
		if (x->getType() == item->getType())
		{
			check = true;
			break;
		}
	}
	return check;
}

string ConvertItemTypeToString(ItemsType e)
{
	string itemType = "";
	switch (e)
	{
	case ItemsType::HealingPoltion:
	{
		itemType = "HealingPotion";
		break;
	}
	case ItemsType::Blade:
	{
		itemType = "Blade";
		break;
	}
	case ItemsType::Mirror:
	{
		itemType = "Mirror";
		break;
	}
	case ItemsType::Ray:
	{
		itemType = "Ray";
		break;
	}
	case ItemsType::Shield:
	{
		itemType = "Shield";
		break;
	}
	}
	return itemType;
}
//For User BuyItem
std::unique_ptr<Items> WhoIsItem(const ItemsType itemtype)
{
	std::unique_ptr<Items> items = nullptr;
	switch (itemtype)
	{
		case ItemsType::HealingPoltion:
		{

			items = std::make_unique<HealingPoltion>();
			break;
		}
		case ItemsType::Blade:
		{
			items = std::make_unique<Blade>();
			break;
		}
		case ItemsType::Mirror:
		{
			items = std::make_unique<Mirror>();
			break;
		}
		case ItemsType::Ray:
		{
			items = std::make_unique<Ray>();
			break;
		}
		case ItemsType::Shield:
		{
			items = std::make_unique<Shield>();
			break;
		}
		default:
		{
			throw Exceptions("Inalid value!!!");
			break;
		}

	}
	return items;
}

//For User BuyHero
HeroType ConvertStringToHeroType(string str)
{
	HeroType h;
	if (str == "Warrior")
	{
		h = HeroType::Warrior;
	}
	else if (str == "Archer")
	{
		h = HeroType::Archer;
	}
	else if (str == "Mage")
	{
		h = HeroType::Mage;
	}
	else
	{
		throw Exceptions("Error!!!");
	}
	return h;
}
//For password
bool isValidPassword(const string& password)
{
	if (password.length() < 8)
	{
		return false;
	}

	bool hasUpper = false;
	bool hasLower = false;
	bool hasDigit = false;
	bool hasSpecial = false;

	for (char ch : password)
	{
		if (std::isupper(ch))
		{
			hasUpper = true;
		}
		else if (std::islower(ch))
		{
			hasLower = true;
		}
		else if (std::isdigit(ch))
		{
			hasDigit = true;
		}
		else
		{
			hasSpecial = true;
		}
	}

	return hasUpper && hasLower
		&& hasDigit && hasSpecial;
}
bool miss(int missOddsRatio)
{
	srand(time(nullptr));
	int number = (rand() % missOddsRatio) + 1;
	if (number != missOddsRatio)
	{
		return false;
	}
	else
	{
		return true;
	}
}