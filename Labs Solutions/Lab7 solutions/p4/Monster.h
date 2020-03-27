#pragma once
#include<string>
using namespace std;

class Monster
{
public:
	enum MonsterType
	{
		ZOMBIE,
		VAMPIRE,
		SKELETON,
		DRAGON,
		MAX_MONSTER_TYPE,
	};

	Monster(MonsterType t, string n, int hp);

	string getTypeString();

	void print();

private:
	MonsterType m_type;
	string m_name;
	int m_health;

};

Monster generateMonster();
int getRandomNumber(int min, int max);