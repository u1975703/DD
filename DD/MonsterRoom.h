#pragma once
#ifndef MONSTERROOM_H
#define MONSTERROOM_H
#include<iostream>
using namespace std;

class MonsterRoom : public Room {
public:

 int fight();
 void printAction(int);
 
 inline static int random; 



 void print(){
	cout << "OH a goblen is attacking you"<< endl ;
 };
 
};

#endif