#include <iostream>
#include "Room.h"
#include "UpgradeRoom.h"
#include "MonsterRoom.h"
#include "TreasureRoom.h"
#include "EmptyRoom.h"
#include <ctime>

using namespace std;
int Room ::HP = 15;
int Room ::Damage = 3;
int Room ::DamagedHP = 15;
int Room ::GoblinDamage = 2;
int Room ::GoblinHp = 10;


Room::Room()
{
	srand((unsigned)time(NULL));
	mark = 0;
};
int Room ::CreateRoom()
{

	mark = (rand() % (9 - 1 + 1)) + 1;

	cin >> userInpute;

	while (userInpute != 'q' || userInpute != 'Q' && DamagedHP >= 0)
	{

		if (userInpute == 'Q' || userInpute == 'q')
			return 0;

		if (mark <= 3)
		{
			EmptyRoom E;
			E.RegenerateHP();
			E.print();
		}

		else if (mark <= 6 & mark >= 4)
		{ 
			int game;
			MonsterRoom M;
			M.print();
			game = M.fight();
		    GoblinHp = 10;
			if (game == 0){return 0;};
			

		}
		else if (mark == 7 || mark == 8)
		{
			UpgradeRoom U;

			U.addHpDamage();
			U.print();
		}
		else if (mark == 9)
		{
			TreasureRoom T;
			T.print();
			return 0;
		}
		mark = (rand() % (9 - 1 + 1)) + 1;
		cout << "Press any key for next room and [q] to leave" << endl;
		cin >> userInpute;
	}
};
