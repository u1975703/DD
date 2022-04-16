#pragma once
#ifndef ROOM_H
#define ROOM_H
using namespace std;

class Room {
public:
	Room();
	int CreateRoom();
	virtual void print() {};
	int getCount();
public:
    char userInpute;
	string player;
	static int HP;
	static int GoblinHp;
	static int GoblinDamage;
	static int DamagedHP;
	static int Damage;
	int Aroom[100];
	int mark, count, y;
	
};







#endif