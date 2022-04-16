#include <iostream>
#include "Room.h"
#include "MonsterRoom.h"
#include <ctime>

void MonsterRoom ::printAction(int turn)
{
    if (turn == 0)
    {
        cout << "Turn of : Monk" << endl;
        cout << "Your HP = " << DamagedHP << " and your Damage = " << Damage << endl;
        cout << "The goblin HP = " << GoblinHp << " and it's Damage = " << GoblinDamage << endl;
        cout << "[1] Attack" << endl
             << "[2] Defend" << endl;
    }

    else if (turn == 1)
    {
        cout << "Turn of : Goblin" << endl;
    }
}
/*
turn 0 = monk
turn 1 = monster

attack 0 = successful
attack 1 = failed

*/

int MonsterRoom ::fight()
{

    string nextstep;
    int turn = 0;

    do
    {
        if (turn == 0)
        {
            printAction(turn);
            random = 0 + (rand() % 2);
            cin >> nextstep;
            if (nextstep == "1")
            {
                if (random == 0)
                {
                    cout << "Attack successfull" << endl;
                    turn = 1;
                    GoblinHp -= Damage;
                }
                else
                {
                    cout << "Attack faild" << endl;
                    turn = 1;
                }
            }
            else if (nextstep == "2")
            {
                if (random == 0)
                {
                    cout << " Defence successfull" << endl;
                    turn = 1;
                    HP += 1;
                }
                else
                {
                    cout << "Defence faild" << endl;
                    turn = 1;
                }
            }
        }
        else if (turn == 1)
        {
            printAction(turn);
            random = 0 + (rand() % 4);

            if (random == 0)
            {
                cout << "Goblin Decided to attack" << endl;
                cout << "Attack Successful" << endl;
                DamagedHP -= GoblinDamage;
                turn = 0;
            }
            else if (random == 1)
            {
                cout << "Goblin Decided to attack" << endl;
                cout << "Attack unsuccessful" << endl;
                turn = 0;
            }

            else
            {
                if (random == 2)
                {
                    cout << "Goblin Decided to defende" << endl;
                    cout << "Defence Successful" << endl;
                    GoblinHp += 1;
                    turn = 1;
                }
                else
                    cout << "Defence unsuccessful" << endl;
                turn = 1;
            }
        }
    } while (GoblinHp > 0 && DamagedHP > 0);
    if (GoblinHp <= 0)
    {
        cout << " you have killed the goblin" << endl;
        return 1;
    }
    else if (DamagedHP <= 0)
    {
        cout << "You have died" << endl;
        return 0;
    };
}
