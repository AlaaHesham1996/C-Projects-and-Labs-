#include"Monster.h"
#include<iostream>


Monster::Monster(MonsterType t, string n, int hp)
	: m_type{ t }, m_name{ n }, m_health{ hp } {}

string Monster::getTypeString() {
	switch (m_type)
	{
	case DRAGON: return "dragon";
	case SKELETON: return "skeleton";
	case VAMPIRE: return "vampire";
	case ZOMBIE: return "zombie";
	}
	return "???";
}

void Monster::print() {
	cout << m_name << " is a " << getTypeString() << " and has " << m_health << " left" << endl;
}

int getRandomNumber(int min, int max){
	static const double fraction = 1.0 / (RAND_MAX + 1);
	return min + (int)((max - min + 1) * (fraction * rand()));
}

Monster generateMonster(){
	static const int size = 6;
	static const string s_names[] = { "Bones", "skele", "drago", "scar", "bigboy", "nems" };
	return Monster(static_cast<Monster::MonsterType>(getRandomNumber(0, Monster::MAX_MONSTER_TYPE - 1))
		, s_names[getRandomNumber(0, size - 1)], getRandomNumber(1, 100));
}
