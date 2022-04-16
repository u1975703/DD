#pragma once
#ifndef UPGRADEROOM_H
#define UPGRADEROOM_H
#include<iostream>
using namespace std;

class  UpgradeRoom : public Room {
public:

void addHpDamage();
void print(){
    cout << "OH it is a upgrade room you will get 5 HP to your max HP. Your max HP now is "<< HP << " and your HP now is " << DamagedHP <<endl ;
    cout << "And you get 3 extra damage. Your damage now is "<< Damage << endl;
	
 };
 };


#endif