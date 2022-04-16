#pragma once
#ifndef TREASUREROOM_H
#define TREASUREROOM_H
#include<iostream>
using namespace std;

class TreasureRoom : public Room {
public:
 void print(){
	cout << "Finaly you found the treasure now you can leave"<< endl ;
 };
};
#endif