#include "Computer.h"
#include "Help.h"
Computer::Computer(string n, vector<std::unique_ptr<PlayerCharacter>> c, vector<std::unique_ptr<Items>> i) :name(n)
{
	characters = std::move(c);
	items = std::move(i);
}
Computer::Computer(string n):name(n)
{
	
}
const string& Computer::getName() const
{
	return name;
}
const vector<std::unique_ptr<PlayerCharacter>>& Computer::getCharacters() const
{
	return characters;
}
const vector<std::unique_ptr<Items>>& Computer::getItems() const
{
	return items;
}
void Computer::setName(const string& n)
{
	name = n;
}
void Computer::addCharacter(const std::unique_ptr<PlayerCharacter>& P)
{
	characters.push_back(std::move(P));
}
void Computer::addItem(const std::unique_ptr<Items>& item)
{
	items.push_back(std::move(item));
}
void Computer::addItems(const std::unique_ptr<Items>& item, int count)
{
	for (int i=0;i<count;i++)
	{
		addItem(item);
	}
}
void Computer::use(std::unique_ptr<Items> item, PlayerCharacter& P)
{
	string inf = "";
	if (DoYouHaveThisItem(items, item))
	{
		int removed = std::erase_if(items, [&](const std::unique_ptr<Items>& x) {return x->getType() == item->getType(); });
		if (removed > 1)
		{
			for (int i = 0; i < (removed - 1); i++)
			{
				items.push_back(WhoIsItem(item->getType()));
			}
		}
		setColor(Color::Green);
		cout << "The computer use this item!" << endl;
		setColor(Color::White);
		int indexOfItem = (int)item->getType();
		P.usingItems[indexOfItem] = true;
		if (indexOfItem == (int)ItemsType::HealingPoltion)
		{
			HealingPoltion healingPoltion = {};

			healingPoltion.UseItem(P, inf);
		}
	}
	else
	{

		throw Exceptions("The computer don't have this item");

	}
}
