#pragma once
#ifndef EMPTYROOM_H
#define EMPTYROOM_H
#include<iostream>
using namespace std;

class EmptyRoom : public Room {
 public:
 void RegenerateHP();
 void print() 
 {
    cout << "OH it is an empty room you are praying to be full HP. Your HP now " << DamagedHP << endl;};
};

#endif