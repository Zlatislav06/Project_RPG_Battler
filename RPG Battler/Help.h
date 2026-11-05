#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include <cstdlib>
#include <windows.h>
#include "Items.h"
#include "PlayerCharacter.h"
#include "Exeptions.h"
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
const int COUNTOFITEMS = 5;
const int WHP = 20;
const int WDAMAGE = 8;
const int PROTECTION = 4;
const int MHP = 12;
const int MDAMAGE = 12;
const int ARHP = 15;
const int ARDAMAGE = 8;
const int STEPEN = 10;
bool DoYouHaveThisItem(const vector<std::unique_ptr<Items>>& items, std::unique_ptr<Items>& item);
string ConvertVectorToString(vector<bool> v, int size);
int FromCharToNumber(char a);
int Power(int number, int power);
vector<bool> CastFromStringToVector(string str, int attackSize);
int CastFromStringToAttack(string str, int& attackSize);
int CastFromStringToVectorOrAttack(string str, vector<bool>& boolVector);
string ToLower(string str);
void ConsoleClear();
string ConvertItemTypeToString(ItemsType e);
std::unique_ptr<Items> WhoIsItem(const ItemsType itemtype);
HeroType ConvertStringToHeroType(string str);
bool isValidPassword(const string& password);
bool miss(int missOddsRatio);

