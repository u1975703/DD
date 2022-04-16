#include<iostream>
#include"Room.h"
using namespace std;

int main() {

   
    Room r;
	cout << "Welcome to dungen and dragons game"<< endl;
	cout << "Enter Your monk name"<< endl;
	cin >> r.player;
	cout << "Hello " << r.player << endl;
    cout <<"If you want to Quit the game enter [Q] if not enter any key"<< endl;
    r.CreateRoom();
	return 0;
}
